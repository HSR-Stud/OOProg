int* pInt = new int[100];
pInt[22] = -45;
delete pInt; // Fehler: nur pInt[0] wird 
  // freigegeben
delete[] pInt; // korrekter Befehl