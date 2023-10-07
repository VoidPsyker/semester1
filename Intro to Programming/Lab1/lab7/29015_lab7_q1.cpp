#include<iostream>
using namespace std;
int main()
{
	int numbers=0, max=0, min=10000,value_of_number=0;
	cout<<"how many numbers do you want to enter?";
	cin>>numbers;
	cout<<"enter value of numbers";
	for (int i=0;i<numbers;i++)
	{
		cin>>value_of_number;
		if (value_of_number>max)
		{
			max=value_of_number;
		}
			if(value_of_number<min)
			{	
			min=value_of_number;
			}
	}
	cout<<"\n max is "<<max;
	cout<<"\n min is"<<min;
}
