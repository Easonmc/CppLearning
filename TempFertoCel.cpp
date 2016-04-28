#include <iostream>
using namespace std;

float Convert(float TempFer)
{
	float c;
	c = (TempFer-32)*5/9; 
	return c;
}

int main()
{
	float TempFer;
	float TempCel;
	cout << "Please enter the temperature in Fahrenheit:";
	cin >> TempFer;
	TempCel = Convert(TempFer);
	cout << TempCel;
}
