#include<iostream>
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q1.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q2.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q3.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q4.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q5.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q6.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q7.cpp"
#include "../../Lab 4 visual studio/Lab 4 visual studio/ibadlab4q8.cpp"
using namespace std;
int main()
{
	int i = 1, selection = 0;
	while (i == 1)
	{
		cin >> selection;
		if (i == 1)
		{
			q1();
		}
		else if (i == 2)
		{
			q2();
		}
		else if (i == 3)
		{
			q3();
		}
		else if (i == 4)
		{
			q4();
		}
		else if (i == 5)
		{
			q5();
		}
		else if (i == 6)
		{
			q6();
		}
		else if (i == 7)
		{
			q7();
		}
		else if (i == 8)
		{
			q8();
		}
		cout << "press 1 to continue\npress 2 to quit program\n";
		cin >> i;
		if (i == 1)
		{
			continue;
		}
		else
		{
			break;
		}
	}




}