#include<iostream>
#include<cstdlib>
using namespace std;
int i = 0;
void check(int arr[10]){
    if(i <= 5){
        if(arr[i] == arr[10 - i]){
            i += 1;
            check(arr);
        } else{
            cout<<arr[i];
        }
    } else{
        cout<<"Symmertric";
    }
}
int main(){
    int arr[10];
    srand((unsigned) time(NULL));
    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 10;
    }
    check(arr);
}