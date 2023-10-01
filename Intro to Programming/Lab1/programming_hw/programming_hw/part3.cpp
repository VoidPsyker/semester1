#include<iostream>
using namespace std;
int main()
{
	int total = 10000, period = 1, shares = 0;
	const int maxperiod = 1000;
	float price;
	float stockPrices[maxperiod];
	float arr[15] = { 26.375,25.5,25.125,25,25.25,27.125,28.250,26,25.5,25,25.125,25.25,26.375,25.5,25 };
	for (int i = 0; i < 15; i++)
	{
		stockPrices[period - 1] = i;
		if (period >= 4)
		{
			if (stockPrices[period - 4] < stockPrices[period - 3] &&
				stockPrices[period - 3] < stockPrices[period - 2] &&
				stockPrices[period - 2] < stockPrices[period - 1]) {
					shares += total / arr[i];
					total = 0;
					}
		else if (stockPrices[period - 4] > stockPrices[period - 3] &&
			stockPrices[period - 3] > stockPrices[period - 2] &&
			stockPrices[period - 2] > stockPrices[period - 1]) {
			total += shares / arr[i];
			shares = 0;

		}
		}
		double portfolio = total + (shares * arr[i]);

			cout << period << "       ";
		cout << arr[i] << "     ";
		cout << total << "       ";
		cout << shares << "       ";
		cout << portfolio << "\n";

		period++;
	}

}