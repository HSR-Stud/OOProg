/*
 * SingingComicCharacter.h
 */

#ifndef SINGINGCOMICCHARACTER_H_
#define SINGINGCOMICCHARACTER_H_

#include <string>
#include "ComicCharacter.h"

class SingingComicCharacter: virtual public ComicCharacter
{
  public:
    SingingComicCharacter(const std::string& aName = "");
    virtual ~SingingComicCharacter();
    virtual void dance() const;
    virtual void sing() const;
};

#endif /* SINGINGCOMICCHARACTER_H_ */
