#include<algorithm>
#include<iostream>
using namespace std;

int arrayEq(int array1[],int size1, int array2[], int size2)
{
	if(size1==size2)
	{
		for(int i=0;i<size1;i++)
		{
			if(array1[i]!=array2[i])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int main()
{
	int array1[5]={6,2,9,11,3},array2[5]={4,5,6,1,3},size1,size2;
	size1 = sizeof(array1)/sizeof(array1[0]);
	size2= sizeof(array2)/sizeof(array2[0]);
	
	cout<<arrayEq(array1,size1,array2,size2);
}
