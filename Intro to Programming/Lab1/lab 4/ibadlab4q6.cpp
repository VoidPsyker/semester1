#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int num;
	cout<<"enter num";
	cin>>num;
	if (num>10 && num<20){
		for (int i=1; i<=num; i++){
		
		cout<<"welcome to CSE 141\n";
	}
	}
	else if (num<0){
		cout<<"negative number";
		
	}else{
		cout<<"sum is\t"<<num;
	}
}
