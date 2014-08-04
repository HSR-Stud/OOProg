class DuckHero: public Duck, public SuperHero
{
  public:
    DuckHero(const std::string& aName = "",
             const std::string& aPower = "noPower");
    virtual ~DuckHero();
    virtual void print() const;
};