struct Birthday{
  int year;
  int month;
  int day;
};

Birthday b;
Birthday* p;

b.year = 1991
p = &b;
p->day = 23;
cout << b.day << b.month << b.year;