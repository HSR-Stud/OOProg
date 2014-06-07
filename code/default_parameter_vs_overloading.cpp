// Variante mit Overloading
// 3 unterschiedliche Funktionen belegen Speicher
// 3 unterschiedliche Funktionen m�ssen gewartet werden
void print(int i);
void print(int i, int width);
void print(int i, char fillchar, int width);

// Variante mit Default-Parameter
// Eine einzige Funktion belegt Speicher
// Nur eine Funktion muss gewartet werden
void print(int i, int width=0, char fillchar=0);