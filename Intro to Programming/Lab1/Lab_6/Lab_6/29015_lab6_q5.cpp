#include<iostream>
using namespace std;
int main()
{
	int array[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "enter values for i and j\n";
			cin >> array[i][j];
			cout << "\n";
		}

	}
	cout << "original array is" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array[i][j]<<"\t";
			//cout << array[j][i]<<"\t";


		}
		cout << "\n";
	}
	cout << "\n";

	cout << "transpose array is" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array[j][i] << "\t";
			//cout << array[j][i]<<"\t";


		}
		cout << "\n";
	}
	cout << "\n";
}
