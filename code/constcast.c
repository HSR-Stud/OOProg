const char* str;
const_cast<char*>str; //Wegoperieren des const-Attributes
//nur einsetzen falls z.Bsp eine Funktion keine consts akzeptiert
dynamic_cast<SuperHero*>p; //Wandelt Pointer p in ein Objektpointer der
//Klasse SuperHero. Geht nur wenn p bereits Klassenobjekt war.
static_cast<SuperHero>Batman; //Umwandeln eines Klassenobjekt in 
//ein Objekt seiner Basisklasse.
reinterpret_cast<int*>p //char Pointer p wird in int-Pointer gewandelt.