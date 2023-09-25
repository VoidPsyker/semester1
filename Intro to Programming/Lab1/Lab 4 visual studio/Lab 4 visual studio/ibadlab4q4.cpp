#include<iostream>
using namespace std;
void q4(){
	int choice,num=1,pos=1,neg=-1,even=0,odd=1,count=0;
    cout<<"enter num";
    cin>>choice;
    while(choice<15 || choice>25){
    	if (choice%2==1){
    		num=choice*choice;
    		cout<<"square is:"<<num;
			odd++;
		}
		else{
			even++;
		}
		if (choice>=100 && choice<=200){
				count++;
		}
		if (choice<0){
			pos++;
		}
		else{
			neg++;
		}
		cout<<"\n";
		cin>>choice;
	}
	cout<<"even numbers are \t"<<pos;
	cout<<"\n odd numbers are \t"<<neg;
	cout<<"\n in range numbers are \t"<<count;
}
