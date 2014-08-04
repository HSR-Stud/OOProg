// interne Daten
double a;     // 1. Seite
double b      // 2. Seite 
// Schnittstelle (Interface)
// Funktionen setA(), setB(), 
// getA(), getB(), getArea()
void setA(double newA)
{
  a = newA;
}

double getArea(void)
{
  return a * b;
}