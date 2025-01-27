#include <iostream>

using namespace std;


int main() {

	int cents;
	cout << "How many cents change? ";
	cin >> cents;

	int quarters = cents / 25;
	if (quarters > 0) {
		cout << "Give them " << quarters << " quarters." << endl;
	}
	cents = cents % 25;

	int dimes = cents / 10;
	if (dimes > 0) {
		cout << "Give them " << dimes << " dimes." << endl;
	}
	cents = cents % 10;

	int nickels = cents / 5;
	if (nickels > 0) {
		cout << "Give them " << nickels << " nickels." << endl;
	}
	cents = cents % 5;

	cout << "Give them " << cents << " pennies." << endl;

	return 0;
}


