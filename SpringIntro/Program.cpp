#include <iostream>

using namespace std;


int main() {

	int num = 0;

	while (true) {
		if (num % 10000 == 0)
			cout << num << endl;
		num = num + 765431;
	}

	return 0;
}


