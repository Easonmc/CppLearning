#include <iostream>
using namespace std;

int Maxl(int a, int b)
{
	if (a > b)
		return a;
	else 
		return b;
}

int Maxl(int a, int b, int c)
{
	if(a >= b && a >= c)
		return a;
	else if(b >= c)
		return b;
	else
		return c;
}

float Maxl(float a, float b)
{
	if(a >= b)
		return a;
	else 
		return b;
}

float Maxl(float a, float b, float c)
{
	if(a >= b && a >= c)
		return a;
	else if(b >= c)
		return b;
	else
		return c;
}

int main()
{
	cout << Maxl(100,200)<<endl;
	cout << Maxl(32,51,11)<<endl;
	cout << Maxl(12.342,12.241)<<endl;
	cout << Maxl(11.245, 11.013, 11.821)<<endl;
	return 0;
}
