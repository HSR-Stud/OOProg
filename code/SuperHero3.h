/*
 * SuperHero.h
 */

#ifndef SUPERHERO_H_
#define SUPERHERO_H_

#include <string>
#include "ComicCharacter.h"

class SuperHero: virtual public ComicCharacter
{
  public:
    SuperHero(const std::string& aName = "",
              const std::string& aPower = "noPower");
    virtual ~SuperHero();
    virtual void fight() const;
    virtual void print() const;
    const std::string& getSuperPower() const;
    void setSuperPower(const std::string& thePower);
  private:
    std::string superPower;
};

#endif /* SUPERHERO_H_ */
