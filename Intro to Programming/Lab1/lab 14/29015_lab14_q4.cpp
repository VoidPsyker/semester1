#include<iostream>
using namespace std;
int count1 = 2;
double sum = 1.0;
void reciprocal(int n){
    if(count1 <= n){
        sum += double(1.0/count1);
        count1 += 1;
        reciprocal(n);
    } else{
        cout<< sum;
    }
}
int main(){
    int n;
    cout<<"Enter an integer: ";
    cin>> n;
    reciprocal(n);
}