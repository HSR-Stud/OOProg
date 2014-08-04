/*
 * DuckHero.h
 */

#ifndef DUCKHERO_H_
#define DUCKHERO_H_

#include "Duck.h"
#include "SuperHero.h"

class DuckHero: public Duck, public SuperHero
{
  public:
    DuckHero(const std::string& aName = "",
             const std::string& aPower = "noPower");
    virtual ~DuckHero();
    virtual void print() const;
};

#endif /* DUCKHERO_H_ */
