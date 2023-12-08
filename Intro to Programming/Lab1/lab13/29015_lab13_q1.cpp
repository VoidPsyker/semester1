#include<iostream>
using namespace std;
int main()
{
	float num1=0,num2=0;
	float *ptr1=&num1,*ptr2=&num2;
	float temp,*ptrtemp=&temp;
	cout<<"enter number\n";
	cin>>num1>>num2;
	
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	*ptr1=*ptrtemp;
	
	if(*ptr1>*ptr2)
	{
		cout<<*ptr1;
	}
	else
	{
		cout<<*ptr2;
	}
}
