#include<iostream>
using namespace std;
int i = 1;
int sing = 1;
int doub = 1;
string star;
void design(int n){
    double half = n/2.0;
    if(i <= n){
        if(i < half){
            star = star + "<";
        } else{
            if(((n) % 2 == 0) && sing == 1){
                star = star + "**";
                sing = 0;
            } else{
                if(((n)%2 != 0) && (doub == 1)){
                    star = star + "*";
                    doub = 0;
                }
            }
            if(i > n/2){
                star = star + ">";
            }
        }
        star = star.substr(0, n);
        i++;
        design(n);
    } else{
        cout<< star;
    }
}
int main(){
    int n;
    cout<<"Enter a positive integer: ";
    cin>> n;
    design(n);
}