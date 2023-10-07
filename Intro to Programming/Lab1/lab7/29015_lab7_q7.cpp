#include<iostream>
using namespace std;
int main()
{
	int magicsquare[3][3]={{2,7,6},{9,5,1},{4,3,8}},row1,row2,row3,col1,col2,col3,diag;
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3;j++)
		{
			
			if(i=0)
			{
				row1+=magicsquare[i][j];
			}	
			else if(i==1){
				row2+=magicsquare[i][j];
			}
			else if(i==2){
				row3+=magicsquare[i][j];
			}
		}
	}
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3;j++)
		{
			if(i=0)
			{
				col1+=magicsquare[i][j];
			}	
			else if(i==1){
				col2+=magicsquare[i][j];
			}
			else if(i==2){
				col3+=magicsquare[i][j];
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
		
		diag+=magicsquare[i][j];
		
	}

	if(row1==row2 && row2==row3 && col1==col2 == col2==col3&& col3==diag)
	{
		cout<<"it is a magic square";	
	}
	else{
		cout<<"it is not a magic square";
	}
}

}
