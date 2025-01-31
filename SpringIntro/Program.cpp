#include <iostream>
#include <string>

using namespace std;


int main() {

	string input = "a";

	while (input != "q") {
		cout << "Here is my menu \n";
		cout << "1 - Count to ten\n";
		cout << "q - quit\n";
		cout << "What do you want to do? ";
		cin >> input;

		cout << endl;

		if (input == "1") {
			int num = 1;
			while (num <= 10) {
				cout << num << endl;
				num++;
			}
		}
		else if (input == "q") {

		}
		else {
			cout << "That is not a menu option.\n";
		}
	}

	return 0;
}


