void prtDate(int day=1, int month=3, int year=2009);

// erlaubt sind z.B. die folgenden Aufrufe:
prtDate();                // 1-3-2009
prtDate(23);              // 23-3-2009
prtDate(15, 6);           // 15-6-2009
prtDate(24, 7, 2012);     // 24-7-2012 

// nicht erlaubt sind z.B. diese Deklarationen:
void prtDate2(int day=7, int month, int year=2009);
void prtDate3(int day, int month=3, int year);