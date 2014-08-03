char str[] = "Ein String";
char* const text = str;
	// erlaubt
char ch = text[1];   
text[1] = 's';    
str[4] = 'A';             
	// nicht erlaubt
text = "Ein anderer String";                  