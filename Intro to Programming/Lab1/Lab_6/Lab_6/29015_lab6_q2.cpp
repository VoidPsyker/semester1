#include <iostream>
using namespace std;

int main() {
	const int row = 3, col = 3;
	int zeros = 0;
	int arr[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "entter array value "<<i+1 <<" and "<< j+1 <<" value\n";
			cin >> arr[i][j];
			if (arr[i][j] <= 0)
			{
				zeros++;
			}
		}
	}
	if((row*col)/2<=zeros)
	{
		cout << "array is sparse";
	}
	else
	{
		cout << "array is not sparse";
	}
	
}