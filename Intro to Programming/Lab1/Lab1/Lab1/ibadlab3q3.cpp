#include<iostream>
using namespace std;
int main(){
	char choice;
	int num1,num2;
	cout<<"enter number 1:";
	cin>>num1;
	cout<<"enter number 2:";
	cin>>num2;
	cout<<"please select\n+ for sum\n-for subtract\n* for multiply\n / for division\n";
	cin>>choice;
	switch(choice){
		case'+':
		cout<<num1+num2;
		break;
		
		case'-':
		cout<<num1-num2;
		break;
		
		case'*':
		cout<<num1*num2;
		break;
		
		case'/':
		cout<<num1/num2;
		break;
	}
	
	
	
	
	
}
