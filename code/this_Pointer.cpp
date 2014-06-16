AnyClass& AnyClass::aMethod(const AnyClass& obj)
{
	this->anyFoo(); 
	if (this == &obj)   // testen, ob eigene Adresse gleich
		...               // Adresse von obj ist 
	return *this;       // eigenes Objekt zurückgeben
}