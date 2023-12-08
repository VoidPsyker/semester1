#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct coord
{
	double x,y;	
};

struct rectangle
{
	coord A,B;
};
double area(const coord& a, const coord& b)
{
	double length = abs(a.x-b.x);
	double width = abs(a.y-b.y);
	return length * width;
}

int main()
{
	rectangle rekt;
	cout<<"enter x and y";
	cin>>rekt.A.x>>rekt.B.x>>rekt.A.y>>rekt.B.y;
	double tayyib = area(rekt.A,rekt.B);
	cout<<"Area of rectangle is"<<tayyib;
	
}

