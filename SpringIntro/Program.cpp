#include <iostream>

using namespace std;


int main() {

	double grade;
	cout << "What is your grade percentage? ";
	cin >> grade;

	if (grade > 100) {
		cout << "Congrats you earned an A+";
	}
	else if (grade > 0) {
		cout << "You earned ";

		if (grade >= 90.0)
			cout << "an A ";
		else if (grade >= 80)
			cout << "a B ";
		else if (grade >= 70)
			cout << "a C ";
		else if (grade >= 60)
			cout << "a D ";
		else
			cout << "a failing grade";
	}
	else
	{
		cout << "mistakes were made";
	}

	cout << endl;

	return 0;
}


