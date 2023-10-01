#include<iostream>
using namespace std;
int main()
{
	float arr[15] = { 26.375,25.5,25.125,25,25.25,27.125,28.250,26,25.5,25,25.125,25.25,26.375,25.5,25 },largest=0,smallest=0;
	for (int i = 0; i < 15; i++)
	{
		
		if (largest > 2) 
		{
			cout << "buy\n";
			largest = 0;
		}
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				largest++;
			}
		}
		if (smallest > 2)
		{
			cout << "sell\n";
			smallest = 0;
		}
		if (i > 0)
		{
			if (arr[i] > arr[i - 1])
			{
				smallest++;
			}
		}
			

	}



}

