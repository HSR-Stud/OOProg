int wert; 	// Variable wert vom Typ int wird definiert
int* ptr; 	// Pointer ptr auf den Typ int wird definiert

ptr = &wert;// ptr zeigt nun auf die Variable wert, enth"alt die Adresse von wert
*ptr = 23; 	// 23 wird via ptr an wert zugewiesen

const char* text = string; //text ist Pointer auf char Konstante
char* const text = string; //text ist ein konstanter Pointer auf char
const char* const text = string; //text ist konstanter Pointer auf char Konstante