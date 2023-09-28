#include<iostream>
using namespace std;
int main()
{
	int a, b, c, result;
	for (int i = -10; i < 10; i++)
	{
		for (int j = -10; j < 10; j++)
		{
			for (int k = -10; k < 10; k++)
			{
				if ((3*i) + (7*j) - (5*k) == 10)
				{
					cout <<"a="<< i << "\t" <<"b="<< j << "\t" <<"c="<< k << "\n";
				}
			}
		}
	}



}