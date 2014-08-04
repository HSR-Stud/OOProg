class A
{
  public:
    virtual A* foo(){};
};

class B: public A
{ 
  public:  // virtual kann weggelassen werden
    virtual A* foo(){}; // ueberschreibt A::foo,
                        // virtuell 
};
