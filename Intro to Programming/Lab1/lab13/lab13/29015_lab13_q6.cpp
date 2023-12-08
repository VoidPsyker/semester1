#include<iostream>
using namespace std;
int IAT(int i = 0, int a = 0, int t = 0)
{
	cout << "enter number";
	cin >> i >> a >> t;
	if (i + a == t)
	{
		if (i > a)
		{
			cout << i;
		}
		else
		{
			cout << a;
		}

	}
	if (i + a != t)
	{
		if (i > a)
		{
			cout << a;
		}
		else
		{
			cout << i;
		}
	}
	return IAT(i,a,t);
}

int main()
{
	int num1=0, num2=0, num3=0;
	IAT(num1, num2, num3);

}