# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2006 Floréal Morandat <morandat@lirmm.fr>
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# This file is free software, which comes along with NIT.  This software is
# distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
# without  even  the implied warranty of  MERCHANTABILITY or  FITNESS FOR A 
# PARTICULAR PURPOSE.  You can modify it is you want,  provided this header
# is kept unaltered, and a notification of the changes is added.
# You  are  allowed  to  redistribute it and sell it, alone or is a part of
# another product.

# Acces of the environement variables of the process
module environ

import symbol

# TODO prevoir une structure pour recup tout un environ, le modifier et le passer a process

redef class Symbol
	# Return environement value for this symbol
	# If there is no such environement value, then return ""
	fun environ: String
	do
		var res = to_s.to_cstring.get_environ
		# FIXME: There is no proper way to handle NULL C string yet. What a pitty.
		var nulstr = once ("".to_cstring.get_environ)
		if res != nulstr then
			return new String.from_cstring(res)
		else
			return ""
		end
	end
end

redef class NativeString
	private fun get_environ: NativeString is extern "string_NativeString_NativeString_get_environ_0"
end
