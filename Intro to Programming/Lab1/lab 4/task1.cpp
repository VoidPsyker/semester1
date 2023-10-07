#include<iostream>
using namespace std;
int main(){
	int numbers[10];
	int count;
	for(int i=0; i<=9; i++){ 
		cout<<"Enter number";
		cin>>numbers[i];
	}
	for(int i=0; i<=9; i++){
			if(numbers[i]==numbers[10]){
		cout<<numbers[i]<<count;
	}
	else if(numbers[i]!=numbers[10]){
		cout<<"Number not found";
	}
	}

}