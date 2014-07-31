SuperHero sh("Speed");
SuperHero p = new SuperHero("Power");

sh.fight();
p->print();
p->dance();
sh.name = "X"; // Fehler! name ist private in
               // der Basisklasse