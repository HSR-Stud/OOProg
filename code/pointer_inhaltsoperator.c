int wert; 
	// Variable wert vom Typ int wird definiert
int* ptr;     
	// Pointer ptr auf den Typ int wird definiert
	// ptr zeigt auf eine nicht definierte 
	// Adresse
ptr = &wert;  
	// ptr zeigt nun auf die Variable wert, d.h.
	// ptr enthaelt die Adresse der Variablen 
	// wert
*ptr = 23;    
	// in die Speicherzelle, auf welche ptr 
	// zeigt(hier: auf die Variable wert), 
	// wird 23 geschrieben. Aequivalent: 
	// wert = 23;