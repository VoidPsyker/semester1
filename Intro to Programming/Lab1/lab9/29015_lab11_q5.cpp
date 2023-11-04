#include<iostream>
using namespace std;

int abd(int array[],int size)
{
	int max=-1;
	int num1,num2;	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j=size;j--)
		{
			if(array[i]==array[j])
			{
				if(j-i+1>max)
				{
					max = (j-i)+1;	
				}
			}
		}
	}
	return max;
}

int main()
{
	int size;
	int arr1[5]={1,2,1,1,3};
	size=sizeof(arr1)/sizeof(arr1[0]);
	cout<<abd(arr1,size);
}
