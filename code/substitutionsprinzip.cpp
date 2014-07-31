class SuperClass{};
class SubClass:public SuperClass{};
SuperClass super;
SubClass sub;
super = sub; // ok
sub = super; // geht nicht