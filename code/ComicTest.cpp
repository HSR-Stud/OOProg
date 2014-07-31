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

  SuperHero sh("Lucky Luke", "Speed");
  sh.fight();
  cout << "Power of " << sh.getName() << " is " << sh.getSuperPower() << endl;
  sh.dance();

  delete pcc;
  return 0;
}
