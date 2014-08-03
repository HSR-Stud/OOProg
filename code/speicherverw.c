int* pInt = new int; 
  // Speicher fuer int alloziert
char* pCh1 = new char; 
  // Speicher fuer char alloziert
char* pCh2 = new char; 
  // Speicher fuer char alloziert
*pInt = 23;
  // Wert zuweisen
pCh2 = pCh1;
  // pCh2 zeigt nun auch auf die Speicherstelle, auf
  // welche pCh1 zeigt. Damit geht aber der 
  // Zugriff auf die Speicherstelle verloren, auf 
  // die pCh2 gezeigt hat (memory leak!)