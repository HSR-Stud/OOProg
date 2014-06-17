TString::TString(const char* p)
{
	if (p == 0)
	{ 
		len = 0;
		str = 0;
	}
	else
	{
		len = strlen(p);
		str = new char[len+1];
		memcpy(str, p, len+1);
	}
}