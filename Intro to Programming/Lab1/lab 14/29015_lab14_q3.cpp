#include<iostream>
using namespace std;
int maxNum = -10000;
int i = 0;
void max(int arr[], int size){
    if(i <= size){
        if(maxNum < arr[i]){
            maxNum = arr[i];
        }
        i += 1;
        max(arr, size);
    } else{
        cout<< maxNum;
    }
}
int main(){
    int size;
    cout<<"Enter the number of elements you wish to enter in array: ";
    cin>> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout<<"Enter a positive integer number to input in the array: ";
        cin>> arr[i];
    }
    max(arr, size);
}