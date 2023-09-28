#include<iostream>
using namespace std;
int main()
{
	int array[4] = {3,5,7,9};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			cout << array[i] << "*" << j<<"="<< array[i] * j << "\n";
		}
	}



}