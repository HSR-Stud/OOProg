class ComicCharacter
{
  public:
	ComicCharacter() {};
    ComicCharacter(const TString& aStr): name (aStr) {};
    virtual ~ComicCharacter() {};
    virtual void print()  = 0; // rein virtuell
  private:
    TString name;
};