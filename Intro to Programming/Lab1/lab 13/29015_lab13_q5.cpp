#include<iostream>
using namespace std;

int fibonacci(int a)
{
	if (a<=1)
	{
		return a;
	}
	return fibonacci(a-1)+fibonacci(a-2);
}



int main()
{
	int num1;
	cout<<"enter number";
	cin>>num1;
	cout<<fibonacci(num1);
}
