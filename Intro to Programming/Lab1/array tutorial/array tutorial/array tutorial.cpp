#include<iostream>
using namespace std;
int main()
{
	int arrray1[5];
	arrray1[0] = 5;
	cout << arrray1[0]<<"\n";
	cout << sizeof(arrray1) / sizeof(int);
	for(int i=0;i<sizeof(arrray1) / sizeof(int);i++)
	{
		cin >> arrray1[i];
	}
	for (int i = 0; i < sizeof(arrray1) / sizeof(int); i++)
	{
		cout << arrray1[i];
	}



}