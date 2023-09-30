#include<iostream>
using namespace std;
int main()
{
	int arr[4][6],sum[2],product[6],total[4];
	for(int i=0;i<4;i++)
	{	
		cout<<"enter id\n";
		cin>>arr[i][0];
		
		cout << "enter product sold:\n";
		cin >> arr[i][1];
		
		cout << "total amount of products sold\n";
		cin>>arr[i][2];
	}
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<6;j++)
		{
			sum[i]=sum[i]+arr[i][j];
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<6;j++)
		{
			product[j]+=arr[i][j];
			total[i]+=arr[i][j];
		}
	}
	cout<<"the product value of all items sold is:\n"<<total[4];
	cout<<"\nthe total sold value is:\n"<<product[6];
}
