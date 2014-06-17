struct Adresse
{
 char strasse[20];
 int hausnummer;
 int plz;
 char ort[20];
};
 
struct Angestellter
{
 int personalnummer;
 char name[20];
 char vorname[20];
 struct Adresse wohnort;
 struct Adresse arbeitsort;
 float gehalt;
};