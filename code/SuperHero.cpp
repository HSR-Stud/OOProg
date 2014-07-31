/*
 * SuperHero.cpp
 */

#include <iostream>
#include <string>
#include "SuperHero.h"
using namespace std;

SuperHero::SuperHero(const string& aName,
                     const string& thePower) :
    ComicCharacter(aName), superPower(thePower)
{
}

SuperHero::~SuperHero()
{
}

void SuperHero::fight() const
{
  cout << getName() << " fights" << endl;
}

void SuperHero::dance() const  //überschreibt die virtual Methode der Basisklasse
{
  cout << "Superheroes don't dance!" << endl;
}

void SuperHero::setSuperPower(const string& thePower)
{
  superPower = thePower;
}

const string& SuperHero::getSuperPower() const
{
  return superPower;
}
