#include<iostream>
using namespace std;
int getdata(int h,int a);
int volume(int h,int a);
int main()
{
	int h,a;	
	cout<<"enter height:";
	cin>>h;
	cout<<"enter area";
	cin>>a;
	cout<<getdata(h,a);
}
int getdata(int h, int a)
{	
	return volume(h,a);
}

int volume(int h, int a)
{
		return((a*a)*(h*1/3));
}
