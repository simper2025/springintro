#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int factorial(int i) {
	if (i == 1) {
		return i;
	}
	return i * factorial(i - 1);
}

int main() {


	cout << factorial(6) << endl;

	int list[] = { 1,2,3,4,5,6,7 };

	for (int i : list) {
		i *= 3;
		cout << i << ", ";
	}

	return 0;
}






