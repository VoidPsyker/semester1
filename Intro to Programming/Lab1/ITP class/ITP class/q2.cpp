//arr1[]={5.3,8.5,2.3,4.0,7.9    arr2[]={2.3,5.7,9.3,10.1

#include<iostream>
using namespace std;
int main()
{
	float arr1[5] = { 5.3,8.5,2.3,4.0,7.9 };
	float arr2[4] = { 2.3,5.7,9.3,10.1 };
	bool bot = false;
		for (int i = 0; i <= 4; i++){
			if (arr1[5] < arr1[i])
				{
				bot=false;
				}
		}
		for (int i = 0; i <= 3; i++) 
		{
			if (arr2[i] < arr2[i + 1]) 
			{
				bot=false;
			}
			
		}
		return bot;




}