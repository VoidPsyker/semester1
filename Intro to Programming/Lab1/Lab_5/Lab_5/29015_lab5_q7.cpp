#include<iostream>
using namespace std;
int main()
{
	int number,count=0,sum=0;
	cout << "enter number:";
	cin >> number;
	while(number>0)
	{
		sum = sum + number % 10;
		number= number / 10;
			count++;
	}
	cout << "the number of digits are:" << count<<"\n";
	cout << "the digital root is:" << sum;





}