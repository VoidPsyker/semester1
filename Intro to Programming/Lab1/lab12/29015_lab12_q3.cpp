#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

bool canBalance(int arr[],int size)
{
	int sum1=0,sum2=0;
	for(int i=0;i<size;i++)
	{
		sum1+=arr[i];
	}
		for(int j=0;j<size-1;j++)
		{
				sum2+=arr[j];
				if(sum2==sum1-sum2)
				{
					return true;
				}
			}
		
		
	
	return false;
}

int main()
{
	int arr[5]={2,1,1,2,1};
	int size;
	size=sizeof(arr)/sizeof(arr[0]);
	
	cout<<canBalance(arr,size);
}
