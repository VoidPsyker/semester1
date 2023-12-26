#include<iostream>
#include<string>
using namespace std;
void palindromeCheck(string wordcheck, int sizestart,int sizeend)
{
	if (wordcheck[sizestart] == wordcheck[sizeend])
	{
		return palindromeCheck(wordcheck, sizestart + 1, sizestart - 1);
	}

}
int main()
{
	string palindrome;
	cin >> palindrome;
	if (palindromeCheck(palindrome, 0, palindrome.length() - 1))
	{
		cout << "it is a palindrome";
	}
	else
	{
		cout << "it is not a palindrome";
	}
}