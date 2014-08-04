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
}

void ComicCharacter::setName(const string& aName)
{
  name = aName;
}

const string& ComicCharacter::getName() const
{
  return name;
}
