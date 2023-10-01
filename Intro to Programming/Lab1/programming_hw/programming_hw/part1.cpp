#include<iostream>
using namespace std;
int main()
{
	int arr[15] = { 26,25,25,25,25,27,28,26,25,25,25,25,26,25,25 };
		for (int i = 0; i < 15; i++)
		{
			int size = 0;
			while (size < arr[i])
			{
				cout << "*";
				size++;
			}
			cout << "\n";
		}


}