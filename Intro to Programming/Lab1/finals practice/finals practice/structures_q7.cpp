//#include<iostream>
//#include<string>
//using namespace std;
//struct bankAcc
//{
//	string accName;
//	int accNumber;
//	int balance;
//};
//int bankBalance(bankAcc& bankinfo)
//{
//	int deposit, withdraw,choice=4;
//	
//	while (choice > 0)
//	{
//		cout << "choose 1 for deposit and 2 for withdrawal and 0 for exit";
//		cin >> choice;
//		if (choice == 1)
//		{
//			cin >> deposit;
//			bankinfo.balance = bankinfo.balance + deposit;
//			cout << "your new balance is\n";
//			cout<< bankinfo.balance<<"\n";
//
//		}
//		if (choice == 2)
//		{
//			cin >> withdraw;
//			bankinfo.balance = bankinfo.balance - withdraw;
//			cout << "your new balance is"<<"\n";
//			cout<< bankinfo.balance<<"\n";
//		}
//		if (choice == 0)
//
//		{
//			break;
//		}
//	}
//	return bankinfo.balance;
//}
//int main()
//{
//	bankAcc bankinfo;
//	cout << "enter account name";
//	cin >> bankinfo.accName;
//	cout << "enter account number";
//	cin >> bankinfo.accNumber;
//	cout << "enter balance";
//	cin >> bankinfo.balance;
//	cout << bankBalance(bankinfo);
//}