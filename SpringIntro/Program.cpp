#include <iostream>

using namespace std;

int main() {


	for (int i = 0; i <= 256; i++) {
		if (i != 27) {
			cout //<< i << " "
				<< (char)i << " ";
		}
		else
		{
			cout << "  ";
		}
		if (i % 16 == 0)
			cout << endl;
	}

	return 0;
}





