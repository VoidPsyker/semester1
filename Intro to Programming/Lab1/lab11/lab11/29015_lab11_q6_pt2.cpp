#include<iostream>
using namespace std;

int main()
{
	int arr1[4][4] = { { 1,2,3,4 }, { 5, 6, 7, 8 } };
	int a = 0, b = 0, row1, col1, row2, col2,x=1000;
	/*while (a>=0 && b>=0)
	{
		int i, j;
		while (a == arr1[i][j])
		{
			cin<<a<<b;
			if(a==arr1[i])
		}
	}*/

	while (a <= 8)
	{
		cin >> row1 >> row2 >> col1 >> col2;
		if (arr1[row1][col1] == arr1[row2][col2])
			cout << "value found";
		a++;
		arr1[row1][col1] = x;
		x--;
		arr1[row2][col2] = x;
		x--;
	}

}