/*
 * SingingComicCharacter.cpp
 */

#include <iostream>
#include "SingingComicCharacter.h"
using namespace std;

SingingComicCharacter::SingingComicCharacter(const string& aName) :
  ComicCharacter(aName)
{
}

SingingComicCharacter::~SingingComicCharacter()
{
}

void SingingComicCharacter::dance() const
{
  cout << getName() << " dances" << endl;
}

void SingingComicCharacter::sing() const
{
  cout << getName() << " sings" << endl;
}
