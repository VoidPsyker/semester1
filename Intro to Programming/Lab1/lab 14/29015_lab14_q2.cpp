#include<iostream>
using namespace std;
int count1 = 0;
int num = 0;
void count7(string n, int num){
    if(num <= int(n.size())){
        if(n.substr(num, 1) == "7"){
            count1 += 1;
            num += 1;
            count7(n, num);
        } else{
            num += 1;
            count7(n, num);
        }
    } else{
        cout<< count1;
    }
}
int main(){
    string n;
    cout<<"Enter an integer number: ";
    cin>> n;
    count7(n, num);
}