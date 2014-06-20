template<typename Any>
inline void swapIt(Any& a, Any& b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}