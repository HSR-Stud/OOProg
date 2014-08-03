int x = 12;

int &r1=x;  //Schreibweise 1: & vor Variablenname
int& r1=x;  //Schreibweise 2: & nach Typangabe, 
            //besser Ersichtlich

int& r4=x; r5=x; //r5 ist keine Referenz! Besser 
                 //einzeln Deklarieren.