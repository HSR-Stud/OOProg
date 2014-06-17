TString::TString(int number);
// explicit call:
TString str1 = TString(12345);     // erzeugt "12345"
// implicit calls:
TString str2 = 12345;              // erzeugt "12345"
str2 = 789; // erzeugt temporäres Objekt "789" und kopiert in str2