cout << a; // erfordert RValue, falls a LValue wird es autom. konvertiert

float f = 1.23
int i = f; // Gleitkomma -> Integer (aufrunden, abrunden implementationsabhaengig)
f = 1;     // Integer -> Gleitkomma