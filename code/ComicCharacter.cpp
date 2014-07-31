/*
 * ComicCharacter.cpp
 */

#include <iostream>
#include <string>
#include "ComicCharacter.h"

using namespace std;

ComicCharacter::ComicCharacter(const string& aName) :
  name(aName)
{
}

ComicCharacter::~ComicCharacter()
{
  cout << "ComicCharacter::~ComicCharacter()" << endl;
}

void ComicCharacter::print() const
{
  cout << "Name of ComicCharacter: " << name << endl;
}

void ComicCharacter::dance() const
{
  cout << name << " dances" << endl;
}

void ComicCharacter::sing() const
{
  cout << name << " sings" << endl;
}

void ComicCharacter::setName(const string& aName)
{
  name = aName;
}

const string& ComicCharacter::getName() const
{
  return name;
}
