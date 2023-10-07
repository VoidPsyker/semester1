#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
	string str,empty="";
	int word_count=0;
	cout<<"enter string";
	getline(cin,str);
	istringstream stream(str);
	while(stream>>str){
		word_count++;
	}
	cout<<"number of words = "<<word_count;
	
}
