#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float arr[15] = { 26.375, 25.5, 25.125, 25, 25.25, 27.125, 28.25, 26, 25.5, 25, 25.125, 25.25, 26.375, 25.5, 25.50 };
    double cash = 10000.00;
    double shares = 0.00;
    double price, portfolioValue;

    cout << "period price cash shares value" << endl;
    cout << "-----------------------------------------------" << endl;

    for (int period = 1; period <= 15; period++) {
        price = arr[period - 1];
        portfolioValue = cash + (shares * price);

        cout << setw(2) << period << " ";
        cout << setw(7) << fixed << setprecision(3) << price << " ";
        cout << setw(9) << fixed << setprecision(2) << cash << " ";
        cout << setw(7) << fixed << setprecision(2) << shares << " ";
        cout << setw(10) << fixed << setprecision(2) << portfolioValue << endl;

        if (period % 5 == 0) {
            // Buy shares when Dilbert's rule signals to buy
            double buyAmount = cash;
            shares += buyAmount / price;
            cash -= buyAmount;
        }
        else if ((period % 4 == 0 || period == 15) && shares > 0) {
            // Sell shares when Dilbert's rule signals to sell or it's the last period
            cash += shares * price;
            shares = 0.00;
        }
    }

    return 0;
}
