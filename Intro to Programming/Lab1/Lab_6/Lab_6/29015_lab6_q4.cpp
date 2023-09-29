#include<iostream>
using namespace std;
int main()
{
	float arr[2][5],sum[2],avg[2],n;
	cout << "enter value of n:\n";
	cin >> n;
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 5; j++) 
			{
				cout << "enter student 1 marks " << i + 1 << " and student 2:" << j + 1 << " marks\n";
				cin >> arr[i][j];
			}
		}
	
	for(int i=0;i<2;i++)
	{
		for (int j = 0; j < 5; j++) 
		{
			sum[i] = sum[i] + arr[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		avg[i]=sum[i]/5 ;
	}
	float cov =((sum[0] - avg[0]) * (sum[1] - avg[1]))*(1/n);
	cout << "covariance is:" << cov;


	}