TString::TString(const TString& s)
	: len(s.len)
{
	if (s.str == 0)
	{
		str = 0;
	}
	else
	{
		str = new char[len+1];
		memcpy(str, s.str, len+1);
	}
}