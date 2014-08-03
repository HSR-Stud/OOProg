int* pInt;  //Zeiger auf int
int arr[100];
pInt = arr; //pInt zeigt auf erstes Element
++pInt;     //pInt zeigt auf zweites Element
*pInt = 2;  //entspricht arr[1] = 2;