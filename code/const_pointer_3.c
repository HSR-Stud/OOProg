char str[] = "Ein String";
const char* const text = str;
	// erlaubt
char ch = text[1];     
str[4] = 'A';             
	// nicht erlaubt
text[1] = 's';  
text = "Ein anderer String";                  