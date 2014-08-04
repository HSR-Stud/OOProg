/*
 * Duck.h
 */

#ifndef DUCK_H_
#define DUCK_H_

#include <string>
#include "SingingComicCharacter.h"

class Duck: public SingingComicCharacter
{
  public:
    Duck(const std::string& aName = "");
    virtual ~Duck();
    virtual void print() const;
    void cackle() const;
};

#endif /* DUCK_H_ */
