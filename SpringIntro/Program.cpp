#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Power(int num, int exp, int *answer) {
	*answer = 1;
	int value = 27;
	for (int i = 0; i < exp; i++)
	{
		*answer *= num;
	}
}

int main() {
	int a = 3;

	int* ptr = nullptr;
	int value = 0;
	ptr = &value;



	cout << "value: " << value << ", &value: " << &value << endl;
	cout << "ptr: " << ptr << ", &ptr: " << &ptr << " *ptr : " << *ptr << endl;


	Power(a, 4, ptr);

	cout << value << endl;

	cout << "a: " << a << endl;
}

