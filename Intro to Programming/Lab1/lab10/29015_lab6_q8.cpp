#include<iostream>
using namespace std;
int main()
{
	int arr[5][9];
	for(int i=0;i<5;i++)
	{
		int obt_marks = 0;
		cout<<"\nenter student id\n";
		cin>>arr[i][0];
		
		cout<<"\nenter 1st subject marks out of 100:";
		cin>>arr[i][1];
		obt_marks =arr[i][1];
		
		cout<<"enter 2nd subject marks out of 100:";
		cin>>arr[i][2];
		obt_marks=arr[i][1]+arr[i][2];
		
		cout<<"enter 3th subject marks out of 100:";
		cin>>arr[i][3];
		obt_marks=arr[i][1]+arr[i][2]+arr[i][3];
		
		cout<<"enter 4th subject marks out of 100:";
		cin>>arr[i][4];
		obt_marks=arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4];
		
		cout<<"enter 5th subject marks out of 100:";
		cin>>arr[i][5];
		 obt_marks=arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4]+arr[i][5];
		 
		cout<<"total marks\n 500\n";
		
		cout<<"obtained marks are:\n";
		cout<<obt_marks;
		
		cout<<"percentage is\n";
		cout<<obt_marks/5;
		
				
	}
	
	
}
