a = 5 * a;   //  ok
6 = a;       // nicht zulaessig, 6 ist kein lvalue
a * b = c;   // nicht zulaessig, (a*b) ist kein lvalue
b = 3++;     // nicht zulaessig, 3 ist kein lvalue