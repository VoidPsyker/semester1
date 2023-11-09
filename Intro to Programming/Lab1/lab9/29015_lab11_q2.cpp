#include<iostream>
using namespace std;

float percentEven(int array[],int size)
{
	int count;
	for( int i=0;i<size;i++)
	{
		if(array[i]%2==0)
		{
			count++;
		}
	}
	
	return (float) count/size*100;
}

int main()
{
	int length, array[5]={6,2,9,11,3};
	length=sizeof(array)/sizeof(array[0]);
	
	cout<<percentEven(array,length);
}
