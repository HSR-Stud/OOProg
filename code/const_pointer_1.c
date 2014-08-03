char str[] = "Ein String";
const char* text = str;
	// erlaubt
char ch = text[1];   
text = "Ein anderer String";     
str[4] = 'A';             
	// nicht erlaubt
text[1] = 's';                    