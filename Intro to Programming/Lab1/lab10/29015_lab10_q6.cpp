#include<iostream>
using namespace std;
int getdata(omt h,int a);
int volume();
int main()
{
	
}
int getdata(int h, int a)
{
	cout<<"enter height:";
	cin>>h;
	cout<<"enter area";
	cin>>a;
	
	return volume(h,a);
}

int volume(int h, int a)
{
		return((a*a)*(h*1/3));
}
