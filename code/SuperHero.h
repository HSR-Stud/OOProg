/*
 * SuperHero.h
 */

#ifndef SUPERHERO_H_
#define SUPERHERO_H_

#include <string>
#include "ComicCharacter.h"

class SuperHero: public ComicCharacter
{
  public:
    SuperHero(const std::string& thePower = "noPower");
    virtual ~SuperHero();
    virtual void fight() const;
    const std::string& getSuperPower() const;
    void setSuperPower(const std::string& thePower);
  private:
    std::string superPower;
};

#endif /* SUPERHERO_H_ */
