#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void notalone(int array[], int value,int size)
{
	for (int i=0; i<size-1;i++)
	{
		if(array[i]==value && array[i-1] != value && array[i+1]!= value)
		array[i]=max(array[i-1],array[i+1]);
	}
}

int main()
{
	int array[6]={1,2,3,2,5,2};
	int size=sizeof(array)/sizeof(array[0]);
	int value=2;
	notalone(array,value,size);
	
	for(int i=0; i<size; i++)
	{
		cout<<array[i];
	}
}
