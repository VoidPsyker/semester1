//#include<iostream>
//using namespace std;
//void CoinToss(int num1)
//{
//	if (num1 == 0)
//	{
//		cout << 0;
//		return;
//	}
//	int binary[32];
//	int i = 0;
//
//	while (num1 > 0)
//	{
//		binary[i] = num1 % 2;
//		num1 /= 2;
//		i++;
//	}
//	for (int j = i - 1; j >= 0; j--)
//	{
//		cout << binary[j];
//	}
//	
//}
//int main()
//{
//	int number=0;
//	cin >> number;
//	cout << CoinToss;
//}

#include <iostream>
using namespace std;

void CoinToss(int num1) {
    int arr[11], i = 0, num = num1;

    
    while (num1 != 0) {
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }
    cout << num << " in Binary is ";

    
    for (i = i - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            cout << 'h';
        }
        else {
            cout << 't';
        }
    }
    cout << endl;
}

int main() {
    int num = 0;
    cin >> num;
    CoinToss(num);

    return 0;
}
