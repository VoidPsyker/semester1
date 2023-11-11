#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

void genRandomMatrix(int m, int n)
{
	int number[16]={0},random_matrix[4][4]= {0}, count=0;
	
	srand(time(0));
	
	for(int i=0;i<4;i++)
	{
	
		number[i]= rand()%2;
	}
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4;j++)
			{
				random_matrix[i][j]=number[count];
				count++;
				
				print(random_matrix);
			}
		}
	
}



void print(int array[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
		cout<<array[i][j];
		}
	}
}




int main()
{
	genRandomMatrix(4,4);
}
