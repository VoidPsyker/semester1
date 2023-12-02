#include<iostream>
#include<string>
using namespace std;
struct IAT 
{
	string name;
	int code;
	double price;	
};

IAT* Tayyib(IAT product[], int num, int code) 
{
	for (int i=0;i<num;i++)
	{
		if (product[i].code==code)
		{
			return &product[i];	
		}	
	}
	return 0;	
}

int main()
{
	const int max=100;
	IAT array[max];
	IAT exp[max];
	int experience=0;
	for(int i=0;i<max;i++)
	{
		cout<<"Enter product name,code,price";
		cin>>array[i].name>>array[i].code>>array[i].price;
		if (array[i].price>20)
		{
			exp[experience++]=array[i];
			
		}
		
	}
	
	int search;
	cout<<"enter a product code to search:";
	cin>>search;
	IAT* found = Tayyib(exp,experience,search);
	if(found!=0)
	{
		cout<<found->name<<"\t"<<found->price;
	}
	else
	{
		cout<<"no product found";
	}
}
