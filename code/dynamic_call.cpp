void printCC1(const ComicCharacter& r)
{  // Aufruf via Referenz
  r.print(); //dynamische Aufloesung
}

void printCC2(const ComicCharacter* p)
{  // Aufruf via Pointer
  p->print(); //dynamische Aufloesung
}

