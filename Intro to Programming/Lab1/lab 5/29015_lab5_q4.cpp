#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	float num,array[6],sum;
	srand(time(0));
	for(int i=1;i<=5;i++){
	
	array[i]=(float) rand()/RAND_MAX;
	cout<<"array elements are=\n"<<array[i]<<"\n";
	sum=sum+array[i];
}
	cout<<"sum is:"<<sum<<"\n";
	cout<<"average is"<<sum/6;
	
	
	
	
}
