class TString
{
	public:
		TString(); 
		TString(const char* p);
		int getLen() const;
	private:
		int len;
		char*  str;
};