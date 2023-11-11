#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int* CountFrequency(int arr1[],int n=0 );
int main()
{
	int n;
	cout << "enter size of array:";
	n = 20;
	int arr1[20];
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		arr1[i] = (rand() % 9 + 1);
	}
	int* frequency = CountFrequency(arr1, n);

	for (int i = 1; i < 9; i++)
	{
		cout << i << "occured" << frequency[i] << "times \n";
	}


delete[] frequency;
}

int* CountFrequency(int arr1[], int n)
{
	int* freq = new int[10] {0};
	for (int i = 0; i < n; i++)
	{
		freq[arr1[i]]++;

	}
	return freq;
}
