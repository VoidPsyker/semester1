#include<iostream>
using namespace std;
int main()
{
	int num=0;
	int result=0;
	int avg = 0;
	int* arr = new int[num];
	cout << "enter number";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++)
	{
		result += arr[i];
		avg = result / num;
	}
	cout << avg;
}