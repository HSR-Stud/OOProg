/*
 * ComicTest.cpp
 */
#include <string>
#include <iostream>
#include "ComicCharacter.h"
#include "SuperHero.h"
using namespace std;

int main()
{
  ComicCharacter cc("Roadrunner");
  cc.sing();
  cc.dance();

  ComicCharacter* pcc = new ComicCharacter;
  pcc->setName("Tom");
  pcc->sing();
  pcc->dance();

  SuperHero sh("Speed");         //hat alle Funktionen die auch CC hat und weitere
  sh.setName("Lucky Luke");
  sh.fight();
  sh.dance();
  cout << "Power of " << sh.getName() << " is " << sh.getSuperPower() << endl;
  //Output: Power of Lucky Luke is Speed \n
  delete pcc;
  return 0;
}
