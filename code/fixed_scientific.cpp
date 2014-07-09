double a = 3.1415926534;
double b = 2006.0;
double c = 1.0e-10;
cout.precision(5);
cout << "fixed:" << endl << fixed;
cout << a << endl << b << endl << c << endl;
cout << endl;
cout << "scientific:" << endl << scientific;
cout << a << endl << b << endl << c << endl;

Ausgabe: 
fixed:
3.14159
2006.00000
0.00000

scientific:
3.14159e+00
2.00600e+03
1.00000e-10