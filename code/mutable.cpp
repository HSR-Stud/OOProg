class Stack
{
	public:
		int pop();
		int peek() const;       
		bool isEmpty() const;
	private:
		int elem[maxElems];     
		int top;              
		mutable bool error;  
};

int Stack::peek() const
{
	error = top == 0;  
	if (!error)
		elem[top-1];
	else
		return 0;
}