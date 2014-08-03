cout << a; //erfordert RValue, falls a LValue wird es autom. Konvertiert

float f = 1.23
int i = f; //Gleitkomma -> Integer (aufrunden,abrunden Implementationsabhaengig)
f = 1;     //Integer -> Gleitkomma