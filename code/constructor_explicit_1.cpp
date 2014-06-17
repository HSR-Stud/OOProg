explicit TString::TString(int number);
 // ok (explicit)
TString str1 = TString(12345); 
// nicht erlaubt (implicit call)
TString str2 = 12345;   
str2 = 78;    
str1 = 567;   