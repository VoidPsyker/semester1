#include<iostream>
using namespace std;
int main()
{
	int arr[3][3],largest=0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "enter array value " << i + 1 << " and " << j + 1 << " value\n";
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (largest < arr[i][j])
			{
				largest = arr[i][j];
			}
		}
	}
	cout << "the largest value is" << largest;
}