#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void q8(){
	double sum,total=0,totalavg,avg;
	int chem,phy,math;
	for(int i=0; i<=10; i++){
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
	
	
	

