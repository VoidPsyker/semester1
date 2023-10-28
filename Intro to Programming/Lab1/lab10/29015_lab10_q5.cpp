#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int CountFrequency(int x,int n);
int main()
{
	int frequency[20]={0},n=0,array[n];
	cout<<"enter size";
	cin>>n;
	
	srand(time(0));
	for(int i=0;i<n;i++){
		
	
	array[i]=(rand()%9)+1;
	frequency=CountFrequency(array,n);
	for(int i=0;i<n+1;i++)
	{
		if(frequency[i]!=0){
			cout<<i<<"occured"<<frequency[i]<<"times\n";
		}
	}
	
}
}


int CountFrequency (int array,int n)
{
	int freq[20]={0};
	for(int i=0; i<n;i++)
	{
		freq[array[i]]i++;
	}
	return freq;
}
