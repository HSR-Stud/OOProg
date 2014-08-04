/*
 * SuperHero.cpp
 */

#include <iostream>
#include <string>
#include "SuperHero.h"
using namespace std;

SuperHero::SuperHero(const string& aName,
                     const string& aPower) :
  ComicCharacter(aName), superPower(aPower)
{
}

SuperHero::~SuperHero()
{
}

void SuperHero::fight() const
{
  cout << getName() << " fights" << endl;
}

void SuperHero::print() const
{
  cout << "Superhero " << getName() << " Superpower: " << superPower << endl;
}

void SuperHero::setSuperPower(const string& thePower)
{
  superPower = thePower;
}

const string& SuperHero::getSuperPower() const
{
  return superPower;
}
