#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	double sum,total,totalavg,avg;
	int chem,phy,math;
	for(int i; i<=10; i++){
		cout<<"this is student"<<i;
		cout<<"\n enter grade of chem ";
		cin>>chem;
		cout<<"enter grade of math";
		cin>>math;
		cout<<"enter grade of phy";
		cin>>phy;
		cout<<"average of this student is:\n"<<(chem+math+phy)/3;
		total=chem+math+phy;
		
	}
	cout<<"average of the entire class is \t\n"<<total/3;
	
	}
	
	
	

