class TString
{
	...
	friend bool operator <(const TString& s1, 
		const TString& s2);
	...
};
bool operator <(const TString& s1, 
	const TString& s2)
{
	...
}