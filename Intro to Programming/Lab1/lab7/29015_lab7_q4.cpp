#include<iostream>
using namespace std;
int main()
{
	int arr[2][2]={{6,9},{4,2}},index,total=0;
	cout<<"enter columns";
	cin>>index;
	for(int i=0; i<2; i++)
	{
		total+=arr[i][index-1];
		
	}
	cout<<total;
	
}
