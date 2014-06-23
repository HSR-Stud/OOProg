class Xcpt {
	public:
		Xcpt(const char* text);
		~Xcpt();
		const char* getDiagStr() const;
	private:
		const char* diagStr;
};

void allocateFoo() {
	b1();
	if (0 == allocation())
		throw Xcpt("Allocation failed!");
	b2();
}

// Testprogramm
void testFoo() {
	a1();
	try {
		a2();
		allocateFoo();
		a3();
	}
	catch (const Xcpt& exc) {
		cout << "Caught exception. Text: " << 
			exc.getDiagStr() << endl;
	}
	a4();
}