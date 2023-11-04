#include<iostream>
using namespace std;
long factorial(int n)
{

	int num=1;
	for (int i=n;i>0;i--)
	{
		num *=i;
	}
	return num;
}
int main()
{
	int n;
	cout<<"enter your number";
	cin>>n;
	
	cout<<factorial(n);
	
}

