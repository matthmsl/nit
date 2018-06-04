# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2018 Matthieu Le Guellaut <leguellaut.matthieu@gmail.com>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
module unix

import nitcorn::reactor
import nitcorn::file_server
import nitcorn::sessions
import nitcorn::signal_handler
import core::file
import libevent
intrude import core::array

redef class ServerConfig
	# Handle to retreive the `HttpFactory` on config change
	private var factory: HttpFactory is noinit

	private init with_factory(factory: HttpFactory) do self.factory = factory
end

redef class HttpFactory
	# Configuration of this server
	#
	# It should be populated after this object has instanciated
	redef var config = new ServerConfig.with_factory(self)
end

redef class Interface
	# Path of UNIX socket file
	var unix_path = "" is optional, writable
	# # Has `self` been registered by `listen_on`?
	private var registered = false

end

redef class Interfaces
	redef fun add(e)
	do
		super
		var config = virtual_host.server_config
		if config != null then sys.listen_on(e, config.factory)
	end
end

redef class VirtualHosts
	redef fun add(e)
	do
		var l = _length
		if _capacity <= l then
			enlarge(l + 1)
		end
		_length = l + 1
		_items.as(not null)[l] = e
		for i in e.interfaces do sys.listen_on(i, config.factory)
	end
end

redef class VirtualHost

	fun unix(path:String)
	do
		for i in interfaces do	i.unix_path=path
	end
end


redef class Sys
	private var listeners = new HashMap2[String,String, ConnectionListener]
	private var listeners_count = new HashMap2[String, String, Int]
	fun listen_on(interfac: Interface, factory: HttpFactory)
	do
		if interfac.registered then return
		var name = interfac.name
		var file = interfac.unix_path
		var listener = listeners[name,file]
		if listener == null then
			listener = factory.bind_to_unix(name,file)
			if listener != null then
				sys.listeners[name,file] = listener
				sys.listeners_count[name,file] = 1
			end
		else
			var value = listeners_count[name,file].as(not null)
			listeners_count[name,file] = value + 1
		end
		interfac.registered = true
	end
end
