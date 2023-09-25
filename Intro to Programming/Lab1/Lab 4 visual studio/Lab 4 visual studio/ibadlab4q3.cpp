#include<iostream>
using namespace std;
void q3(){
	int seats=500, num;
	double cost, discount=0.2;
	char choice;
	while (seats<=500 && seats!=0){
		cout<<"seats available"<<seats;
		cout<<"\nenter sopho(s) or junior(j)\n";
		cin>>choice;
		cout<<"how many tickets needed\n";
		cin>>num;
		if(choice =='s'){
			if(num>3){
				cost=100*discount*num;
				cout<<"cost is:\n"<<cost;
				seats=seats-num;
				
			}
			else{
				cost=100*num;
				cout<<"cost is:\n"<<cost;
				seats=seats-num;
			}
		}else if(choice =='j'){
		if(num>3){
			cost=50*discount*num;
				cout<<"cost is:\n"<<cost;
				seats=seats-num;
		}	
		else{cost=50*num;
				cout<<"cost is:\n"<<cost;
				seats=seats-num;
		}
		}
		}
	}
	

