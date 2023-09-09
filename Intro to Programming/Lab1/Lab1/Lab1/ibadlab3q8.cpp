#include<iostream>
using namespace std;
int main(){

int pepsi,dew,rs;
double quantity1,quantity2,price;
char q,c;
pepsi=35;
dew=38;
cout<<"please choose q for quantity or c for cost\n";
cin>>q;
switch(q){
	case'q':
	cout<<"please enter how many bottles of pepsi you want to buy";
	cin>>quantity1;
	cout<<quantity1*pepsi<<"\n";
	cout<<"please enter how many bottles of dew you want to buy";
	cin>>quantity2;
	cout<<quantity2*dew<<"\n";
	if(quantity1+quantity2>=50 && quantity1+quantity2<155){
	cout<<"you have recieved a discount of 8.5% and your new price is:"<<((quantity1*pepsi)+(quantity2*dew))/8.5;
	
	}else if(quantity1+quantity2>=155){
		cout<<"you have recieved a discount of 25% and your new price is:"<<((quantity1*pepsi)+(quantity2*dew))/25;
	}else{
	
	cout<<"your price is"<<(quantity1*pepsi)+(quantity2*dew);
	break;
	
	case'c':
	cout<<"please enter your cash";
	cin>>price;
	if(price>2000){
		cout<<"you have recieved a discount of 8.5%"<<price*0.085;
		
	}else if(price>=4500){
		cout<<"you have recieved a discount of 25% and your new price is:"<<price*0.25;
}else{
	
	cout<<"your price is"<<(price*pepsi)+(price*dew);
	break;}
	}
	
	

}

}








