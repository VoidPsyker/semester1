#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void shuffle(double a[],int size)
{

	srand(time(0));
	
	for (int j=0;j<size;j++)
	{
		int i=rand()%(j+1);
		double temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	

}

int main()
{
	double array[5]={1,2,3,4,5};
	int size;
	for (int j=0;j<size;j++)
	{
		cout<<array[j]<<"\n";
	}
	
	size= sizeof(array)/sizeof(array[0]);
	
	shuffle (array,size);
	for (int i=0;i<size; i++)
	{
		cout<<array[i];
	}
}
