#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int Average(int array[],int start, int end)
{
	int sum=0;
	for(int i=0; i<end;i++)
	{
		sum+=array[i];	
	}	
	return sum/(start-end);
}

int scoresAverage (int array[], int size)
{
	
	int first_avg=Average(array,0,size/2);
	int second_avg=Average(array,size/2,size);
	return (first_avg>second_avg) ? first_avg:second_avg;
}

int main()
{
	int score1[4]={2,2,4,4};
	int score2[6]={4,4,4,2,2,2};
	int score3[6]={3,4,5,1,2,3};
	int size1=sizeof(score1)/sizeof(score1[0]);
	int size2=sizeof(score2)/sizeof(score2[0]);
	int size3=sizeof(score3)/sizeof(score3[0]);
	cout<<scoresAverage(score1,size1);
	cout<<scoresAverage(score2,size2);
	cout<<scoresAverage(score3,size3);
	return 0;
	
}
