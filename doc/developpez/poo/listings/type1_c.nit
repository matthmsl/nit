abstract class Aliment end

class Herbe super Aliment end

class Animal
	type REGIME: Aliment

	fun manger(x: REGIME) do print "Je mange"
end

class Vache
	super Animal

	redef type REGIME: Herbe
end

var vache = new Vache
vache.manger(new Herbe)
