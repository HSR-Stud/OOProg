int main()
{
	int (*p) (char); // Deklaration des Funktionspointers
	char c;
	int ret;
	std::cout << "Buchstabe eingeben: ";
	std::cin >> c;
	p = foo; // ermittle Adresse der Funktion
	foo()
	ret = p(c); // Aufruf von foo() "uber Funktionspointer
return 0;
}