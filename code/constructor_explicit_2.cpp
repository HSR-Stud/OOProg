class TString
{
	public:
		TString();              
		TString(const char* p);
		explicit TString(int nr);
		int getLen() const;
	private:
		int len;
		char*  str;
};