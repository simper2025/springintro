#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void Add(int a, int b, int&);

void Add(int a, int b, int &sum) {
	sum = a + b;
}

int foo(int a, int& c, vector<vector<int>> * list) {
	c = a + 7;
	return 5;
}

int* foo() {
	int* ptr1 = new int;
	
	*ptr1 = 72;
	cout << "ptr1: " << ptr1 << endl;
	cout << "*ptr1: " << *ptr1 << endl;
	cout << "&ptr1: " << &ptr1 << endl;

	int c = 13;
	int* ptr2 = &c;

	int* p = new int[c];
	
	delete p;

	return ptr1;
}


bool IsValid(int a) {
	return (a > 1);
}


int main() {

	int a = 1;
	int b = 2;
	int c = 27;

	Add(a, 3, c);
	cout << "Sum: " << c << endl;
	cout << "&a: " << &a << endl;
	
	foo();

	int* p = new int [12];

	if (IsValid(a)) {

	}

	*(p + 0) = 21;

	*(p + 1) = 17;

	p[2] = 75;


	int* i = p;

	i++;

	delete p;
}

