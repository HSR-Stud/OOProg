// Default-Modi
ifstream readfrom("Eingabe.txt");
ofstream writeTo("Ausgabe.txt");

// Für Eingabe öffnen
ifstream readFrom("Eingabe.txt", ios_base::in);

// Binäre Eingabe
ifstream readFrom("Eingabe.txt", ios_base::in 
                               | ios_base::bin);

// Binäre Ausgabe und Datei leeren 
// falls sie existiert
ofstream writeTo("Ausgabe.txt", ios_base::out 
                              | ios_base::bin 
                              | ios_base::trunc);