void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	int x = 4;
	int y = 3;
	swap(x, y); // keine Auswirkung
	return 0;
}