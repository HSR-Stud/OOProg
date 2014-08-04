/*
 * Duck.cpp
 */

#include <iostream>
#include "Duck.h"
using namespace std;

Duck::Duck(const string& aName) :
  SingingComicCharacter(aName)
{
}

Duck::~Duck()
{
}

void Duck::print() const
{
  cout << "Duck " << getName() << endl;
}

void Duck::cackle() const
{
  cout << getName() << " cackles" << endl;
}
