/*
 * ComicCharacter.h
 */

#ifndef COMICCHARACTER_H_
#define COMICCHARACTER_H_

#include <string>

class ComicCharacter
{
  public:
    ComicCharacter(const std::string& aName = "");
    virtual ~ComicCharacter();
    virtual void print() const;
    virtual void dance() const;
    virtual void sing() const;
    void setName(const std::string& aName);
    const std::string& getName() const;
  private:
    std::string name;
};

#endif /* COMICCHARACTER_H_ */
