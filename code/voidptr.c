int a;
int* pi = &a;
void* pv = pi; // ok
double* pd = pv; // Error (in C erlaubt)
pd = static_cast<double*>pv; // ok