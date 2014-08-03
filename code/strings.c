char s1[7];  
char s2[7] = "Hallo";  //2 Zeichenketten der Laenge 7
char* p;     //Pointer auf char
memcpy(s1,s2,7) //Kopiert "Hallo" nach s1
memcpy(p,s1,7) //Falsch, da p nirgends zugewiesen