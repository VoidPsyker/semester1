#include<iostream>
using namespace std;
int i = 1;
double sum = 1;
void pow(double b, int p){
    if(i <= p){
        sum = sum * b;
        i++;
        pow(b, p);
    } else{
        cout<< sum;
    }
}
int main(){
    double b;
    int p;
    cout<<"Enter any number: ";
    cin>> b;
    cout<<"Enter an integer number: ";
    cin>> p;
    pow(b, p);
}