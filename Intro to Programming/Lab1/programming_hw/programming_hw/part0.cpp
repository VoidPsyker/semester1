#include<iostream>
#include<iomanip>
int main() {
	std::cout << std::fixed << std::setprecision(3);
	// set precision to 3 decimal places
	double price;
	while (std::cin >> price) {
		std::cout << std::setw(10) << price << "\n";
		// setw() sets the width of the next output value
	}
	return 0;
}
