#include<iostream>
using namespace std;
int main()
{
	int arr[13],longest=0,consecutive=0,number=0,inum=0,final=0;
	cout<<"enter numbers";
	cin>>inum;
	
	while(cin>>number && number!=-1)
	{
		if(number==inum)
		{
			consecutive++;
			if(consecutive>longest)
			{
				longest=consecutive;
				final=number;
			}
		}
		else
		{
			consecutive=1;
		}
		inum=number;
	}
	cout<<"longest run :"<<longest<<"consecutive"<<final;
}
