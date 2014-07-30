// interne Daten
double a;     // 1. Seite
double b      // 2. Seite
double area;  // Rechtecksflaeche, 
              // Attribut wird entfernt
// Schnittstelle (Interface)
// Attribut area wird entfernt
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