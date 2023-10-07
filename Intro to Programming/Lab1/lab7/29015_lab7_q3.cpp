#include<iostream>
using namespace std;
int main()
{
	int matrice1[3][4]={{2,5,7,1},{1,3,6,1},{5,4,1,3}};
	int matrice2[3][4]={{1,9,5,0},{7,1,5,4},{3,4,2,8}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		if(j==3)
		cout<<matrice1[i][j]+matrice2[i][j]<<"\n";
		else{
			cout<<matrice1[i][j]+matrice2[i][j]<<"\t";
		}
		
	}
	
	
}
