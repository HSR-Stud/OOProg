/*
 * SuperHero.cpp
 */

#include <iostream>
#include <string>
#include "SuperHero.h"
using namespace std;

SuperHero::SuperHero(const string& thePower) :
  superPower(thePower) // base class ctor is implicitely called first!
{
}

SuperHero::~SuperHero()
{
  cout << "SuperHero::~SuperHero()" << endl;
}

void SuperHero::fight() const
{
  cout << getName() << " fights" << endl;
}

void SuperHero::setSuperPower(const string& thePower)
{
  superPower = thePower;
}

const string& SuperHero::getSuperPower() const
{
  return superPower;
}
