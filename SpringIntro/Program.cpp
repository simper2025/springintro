#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int* foo() {
	int* ptr1 = new int;
	*ptr1 = 72;

	int c = 13;
	int* ptr2 = &c;

	int* p = new int[c];
	
	delete p;

	return ptr1;
}


int main() {
	
	int* p = new int [12];

	*(p + 0) = 21;

	*(p + 1) = 17;

	p[2] = 75;


	int* i = p;

	i++;

	delete p;
}

