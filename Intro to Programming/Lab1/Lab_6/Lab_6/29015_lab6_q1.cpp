#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter array size:\n";
    cin>>size;
    int arr[size];
    int sum=0, count=0;
    double avg=0;
    for(int i=0;i<size;i++)
    {
        cout<<"enter array number\n";
        cin>>arr[i];
        sum=sum+arr[i];
        count++;
    }
    if(count>0)
    {
        avg = sum/count;
    }
    cout<<"sum of all numbers\n"<<sum;
    cout<<"\naverage of all numbers\n"<<avg;
}
