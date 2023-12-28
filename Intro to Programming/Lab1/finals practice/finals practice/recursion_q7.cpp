//#include<iostream>
//#include<string>
//using namespace std;
//void swapFunc(string& permacheck, int n, int r)
//{
//	char temp = permacheck[n];
//	permacheck[n] = permacheck[r];
//	permacheck[r] = temp;
//}
//void Permutation(string permcheck, int n, int r)
//{
//	if (n == r)
//	{
//		cout << permcheck << "\n";
//		return;
//	}
//	for (int i = n; i <= r; i++)
//	{
//		swapFunc(permcheck, n, i);
//		Permutation(permcheck, n  , r);
//		swapFunc(permcheck, n, i);
//	}
//}
//int main()
//{
//	string permcheck;
//	cin >> permcheck;
//	Permutation(permcheck, 0, permcheck.length() - 1);
//}