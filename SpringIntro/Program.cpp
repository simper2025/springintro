#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Power(int num, int exp, int &answer) {
	answer = 1;

	for (int i = 0; i < exp; i++)
	{
		answer *= num;
	}
}

int main() {
	int a = 3;

	int value;
	Power(a, 4, value);

	cout << value << endl;

	cout << "a: " << a << endl;
}

