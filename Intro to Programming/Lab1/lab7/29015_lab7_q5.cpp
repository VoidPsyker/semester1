#include<iostream>
using namespace std;
int main()
{
	int arr[4][3]={{9,5,7},{1,3,6},{5,4,1},{0,8,2}}, arr2[4][3]={0};
	cout<<"array is";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			arr2[4][3]=arr[4][3];
			cout<<arr2[i][j]<<"\t";
			}
		}
	
	cout<<"transpose is";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
		cout<<arr2[j][i]<<"\t";
			}
		}
	
	
}
