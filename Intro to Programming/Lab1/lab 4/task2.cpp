#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	float numbers[6]={3.14, 3.24, 3.34, 3.44, 3.54};
	cout<<"numbers:";
	for(int i=0; i<=5; i++){
		cout<<numbers[i]<<" ";
	}
	sort(numbers, numbers+5, greater<double>());
	cout<<"Numbers in descending order:";
	for(int i=0; i<=5; i++){
		cout<<numbers[i]<<" ";
	}
}