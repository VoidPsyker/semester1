#include<iostream>
using namespace std;
int main()
{
	int i=0,a=0,t=0;
	float average, *avg= &average;
	int *ptr1=&i,*ptr2=&a,*ptr3=&t;
	
	cout<<"please enter ibad marks\n";
	cin>>*ptr1;
	cout<<"please enter abdullah marks\n";
	cin>>*ptr2;
	cout<<"please enter tayyib marks\n";
	cin>>*ptr3;
	if(*ptr1>=5 && *ptr2>=5 && *ptr3>=5)
	{
		if(*ptr1>*ptr2 && *ptr1>*ptr3 && *ptr2>*ptr3)
		{
			cout<<*ptr3<<*ptr2<<*ptr1;
		}
		
		if(*ptr2>*ptr1 && *ptr2>*ptr3 && *ptr1>*ptr3)
		{
			cout<<*ptr3<<*ptr1<<*ptr2;
		}
		if(*ptr1>*ptr2 && *ptr1>*ptr3 && *ptr3>*ptr2)
		{
			cout<<*ptr2<<*ptr3<<*ptr1;
		}
		if(*ptr2>*ptr1 && *ptr1>*ptr3 && *ptr3>*ptr1)
		{
			cout<<*ptr1<<*ptr3<<*ptr2;
		}
		if(*ptr3>*ptr1 && *ptr3>*ptr2 && *ptr1>*ptr2)
		{
			cout<<*ptr2<<*ptr1<<*ptr3;
		}
		if(*ptr3>*ptr1 && *ptr3>*ptr2 && *ptr2>*ptr1)
		{
			cout<<*ptr1<<*ptr2<<*ptr3;
		}
	}
	else
	{
		cout<<(float)(*ptr1+*ptr2+*ptr3)/3;
	}
}
