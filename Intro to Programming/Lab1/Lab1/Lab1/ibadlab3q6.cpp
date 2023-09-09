#include<iostream>
#include<cstring>
using namespace std;
int main(){

char grade;
cout<<"enter your grade from A to F:";
cin>>grade;
if(grade=='A'||grade=='a'){
	cout<<"the marks of student is between 80-100";
}else if(grade=='B'||grade=='b'){
	cout<<"the marks of student is between 70-79";
}else if(grade=='C'||grade=='c'){
	cout<<"the marks of student is between 60-69";
}else if(grade=='D'||grade=='d'){
	cout<<"the marks of student is between 50-59";
}else if (grade=='E'||grade=='e'){
	cout<<"the marks of the student between 40-49";
}else
	cout<<"the student is failed";





}
