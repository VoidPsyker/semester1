#include<iostream>
using namespace std;
int fibonacci(int n);
int main()
{
	int n;
	cout << "enter n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{


		cout << fibonacci(i);
	}
}



int fibonacci(int n=0)
{
	
	if (n <= 1)
	{
		return n;
	}
	else
	{
	return	fibonacci(n - 1) + fibonacci(n - 2);
	}
	
}