/*
 * DynCastTest.cpp
 */
#include <iostream>
#include <iomanip>
#include <typeinfo>
using namespace std;

class A
{
  public:
    virtual void fooA() {}
    virtual ~A() {}
  private:
    int data;
};

class B
{
  public:
    virtual void fooB(){}
    virtual ~B() {}
  private:
    double data;
};

class C: public A, public virtual B
{
};

int main()
{
  A* pa = new A;
  B* pb = new B;
  C* pc1 = (C*)pa;
  C* pc2 = dynamic_cast<C*>(pa);
//  C* pc3 = (C*)pb;  // geht nicht, da C von B virtual erbt
  C* pc4 = dynamic_cast<C*>(pb);

  cout << hex << showbase;
  cout << "pa  = " << pa << endl;
  cout << "pb  = " << pb << endl;
  cout << "pc1 = " << pc1 << endl;
  cout << "pc2 = " << pc2 << endl;

  cout << "pc4 = " << pc4 << endl;

  cout << "Typ von pa : " << typeid(*pa).name() << endl;
  cout << "Typ von pb : " << typeid(*pb).name() << endl;
  cout << "Typ von pc1: " << typeid(*pc1).name() << endl;
  delete pa;
  delete pb;
  return 0;
}
/* Der mögliche Output sieht wie folgt aus:
pa  = 0x80069008
pb  = 0x8006fcc8
pc1 = 0x80069008
pc2 = 0
pc4 = 0
Typ von pa : 1A
Typ von pb : 1B
Typ von pc1: 1A

Bemerkungen:
pc1 und pa haben die selbe Adresse aber unterschiedliche Typen.

pc1 ist unschön (C-Cast). Es ist zwar eine korrekte Anweisung, ist aber
unsinnig, da ein Pointer nicht auf ein Objekt seiner Oberklasse zeigen
soll (umgekehrt ist ok).

pc2 ist die saubere Variante von pc1. Der Typecast ist erfolgreich, falls pa
wirklich auf ein Objekt der Klasse C oder auf eine UNTER-Klasse von C zeigt.
Da dies nicht der Fall ist, erhält pc2 den Nullpointer.

pc3 funktioniert nicht, da B eine VIRTUELLE Basisklasse von C ist. Zudem ist
es wieder ein unschöner C-Cast, der nicht verwendet werden sollte.

pc4 ergibt aus diesem Grund den Nullpointer, ist aber eine korrekte Anweisung.
*/
