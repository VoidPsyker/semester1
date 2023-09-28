#include<iostream>
using namespace std;
int main()
{
	int array1[10], array2[10],array3[10],count1=0,count2=0,sum=0,count3=0,sum2=0,count4=0;
	for (int i = 0; i < 10; i++) 
	{
		cin >> array3[i];
	}
	for (int i = 0; i < 10; i++)
	{
		if (array3[i] >= 5 && array3[i]<=10) 
		{
			array1[count1++] = array3[i];
			
		}
		else if(array3[i]<5 && array3[i]>=0)
		{
			array2[count2++] = array3[i];

		}
		else 
		{
			cout << "invalid value";
				break;
		}
	}
	for (int i = 0; i < sizeof(array1) / sizeof(int); i++)
	{
		if (array1[i] >= 0) {
			cout << "array 1 values are:" << array1[i] << "\n";
			sum = sum + array1[i];
			count3++;
			
		}
	}
	for (int i = 0; i < sizeof(array2) / sizeof(int); i++)
	{
		if (array2[i] >= 0) {
			cout << "array 2 values are:" << array2[i] << "\n";
			sum2 = sum+array2[i];
			count4++;
			
		}
		
	}
	cout << sum / count3;
	cout << "pass are:"<<count3<<"\n";
	cout << "fail are:"<<count4;

}