#include<iostream>
using namespace std;
int main()
{	
	int i=0,a=0,t=0;
	int *arr[3]={&i,&a,&t};
	for(int j=0;j<3;j++)
	{
		do
		{
			cout<<"enter side";
			cin>>*(arr[j]);
			
		}
	
	
	while(*(arr[2])<=*(arr[0]) || (*arr[2])<=(*arr[1]));
	{
		cout<<"enter side greater then the previous two";
		cin>>t;
		if(t<a &&t<i)
		{
			cout<<"try again";
			break;
		}
	}
	if((i*i)+(a*a)==t*t)
	{
		cout<<"this is right angled triangle";
	}
	if((i*i)+(a*a)>t*t)
	{
		cout<<"this is obtuse triangle";
		
	}
	if((i*i)+(a*a)<t*t)
	{
		cout<<"this is acute triangle";
	}
	}
}
	
	
