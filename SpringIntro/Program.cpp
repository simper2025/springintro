#include <iostream>
#include <string>

using namespace std;


int main() {
	
	/*char c = 61;
	cout << "Char: " << c << endl;*/

	int count = 0;
	int i;
	cout << "Start Position: ";
	cin >> i;
	while (i != 1) {
		if (i % 2 == 1)
			i = i * 3 + 1;
		else
			i = i / 2;
		cout << "Value: " << i << endl;
		count++;
	}
	cout << "Completed: " << count;

	return 0;
}


