#include<iostream>
#include<string>
using namespace std;
int main()
{
		string firstname,lastname,reverse;
		cout<<"Enter first name";
		cin>>firstname;
		cout<<"enter last name";
		cin>>lastname;
		firstname+=lastname;
		for(int i=0;firstname.length();i>=0;i--)
		{
			cout<<firstname;
		}
}
