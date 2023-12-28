#include<iostream>
using namespace std;
int fibonacci(int n);

int main()
{
	int num=0;
	cin >> num;
	cout << fibonacci(num-1);

}
int fibonacci(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}