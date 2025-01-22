#include <iostream>

using namespace std;


int main() {


	int hens;
	int eggs;

	cout << "How many hens do you have? ";
	cin >> hens;
	cout << "How many eggs did you get today? ";
	cin >> eggs;

	double percent = (eggs * 100.0) / hens;

	cout  << percent << "% of you hens laid eggs.";


	return 0;
}


