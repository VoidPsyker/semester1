#include<iostream>
#include<algorithm>
using namespace std;

int tayyib(int a,int b,int c)
{
	if(a+b==c)
	{
		return max(a,b);	
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}

int main()
{
	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	
	cout<<tayyib(num1,num2,num3);
}
