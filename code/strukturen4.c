struct Angestellter mueller;
struct Angestellter bonderer;

struct Angestellter vertrieb[20];

struct Angestellter* pMitarbeiter = &bonderer;

mueller.personalnummer = 34259;
bonderer.wohnort.plz = 7208;
strcpy(mueller.vorname, "Fritz");
printf("%s\n", vertrieb[14].name);

pMitarbeiter->personalnummer = 65433;   // einfache Form bei Pointer
(*pMitarbeiter).personalnummer = 65433; // alternative Form

pMitarbeiter->arbeitsort.plz = 8640;   