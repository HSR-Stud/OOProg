#include <stdio.h>
int foo(char ch)
{
	int i;
	for (i = 1; i <= 10; i++)
		printf("%c ", ch);
	return i;
}
int main(void)
{
	int (*p)(char);   
		// Deklaration des Funktionspointers
	int ret;
	p = foo;          
		// ermittle Adresse der Funktion foo()
	ret = p('A');     
		// Aufruf von foo() ueber Funktionspointer
	return 0;
}