#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){

int choice,sum;
	for(int i;i<=10; i++){
		cout<<"enter your choice:(1-3): \t";
		cin>>choice;
		if(choice==1){
			sum=sum+1;
		}
		else if(choice==2){
			sum=sum+2;
		}
		else if(choice==3){
			sum=sum+3;
		}
		else{
			cout<<"invalid";
			break;
		}
		cout<<"score is\t"<<sum;
		
	}
}
