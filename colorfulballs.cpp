#include <iostream>

using namespace std;

int main()
{
	int i, j, k, n = 0;
	char c[5][7]={"red", "yellow", "blue", "white", "black"};
	for(i = 0; i < 5; i++)
		for(j = 0; j < 5; j++)
			for(k = 0; k < 5; k++)
				if(i != j && i != k && j != k)
				{				
					cout << c[i]<<" " << c[j] <<" "<< c[k]<< endl;
					++n;
				}
	cout << n << endl;
}
