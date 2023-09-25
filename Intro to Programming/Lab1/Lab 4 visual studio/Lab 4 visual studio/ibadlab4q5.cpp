#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void q5(){
	int rand(),temp;
	double x, y, input=0, ans,fail=0,pass=0;
	while(input!=-1){
	srand(time(0));
	x=rand()%10+1;
	y=rand()%10+1;
	if(x>y){
		temp=y;
		y=x;
		x=temp;
		
	}
	
	cout<<x<<"x"<<y<<"=";
	cin>>ans;
 if(ans==(x*y)){
		cout<<"\n pass \n";
		pass++;
		
	}else if(ans==-1){
		input=-1;
		break;
	}
	else{cout<<"\n fail";
			fail++;
		}
	}
	cout<<"pass = "<<pass;
	cout<<"fail = "<<fail;
}
