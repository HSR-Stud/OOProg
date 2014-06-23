// Deklaration
template<typename ElemType, int size=100>
class Stack
{
	public:
		Stack();
		~Stack();
		void push(const ElemType& elem);
		ElemType pop();
		bool wasError() const;
		bool isEmpty() const;
	private:
		ElemType elems[size];
		int top;
		bool isError;
};

// Definition
template<typename ElemType, int size>
void Stack<ElemType, size>::push(const ElemType& elem)
{
}

// Nutzung
Stack<int, 10>  s1; 
	// s1 ist ein Stack mit 10 int's
Stack<int>      s2; 
	// s2 ist ein Stack mit 100 int's (Default)
Stack<double>   s3; 
	// s3 ist ein Stack mit 100 double's