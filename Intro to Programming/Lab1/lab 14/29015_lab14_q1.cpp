#include<iostream>
using namespace std;
int sum = 1;
void factorial(int n){
    if(n == 0){
        cout<< 1;
    } else{
        if(n < 0){
            cout<<"Undefined";
        } else{
            sum *= n;
            if(n <= 1){
                cout<< sum;
            } else{
                factorial(n - 1);
            }
        }
    }
}
int main(){
    int n;
    cout<< "Enter an integer: ";
    cin>> n;
    factorial(n);
}