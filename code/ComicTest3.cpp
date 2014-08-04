/*
 * ComicTest.cpp
 */
#include <iostream>
#include <typeinfo>
#include "DuckHero.h"

using namespace std;

int main()
{
  DuckHero dh("CrazyDuck", "Flashspeed");
  dh.fight();
  dh.sing();
  dh.print();

  return 0;
}
