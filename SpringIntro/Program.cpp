#include <iostream>

using namespace std;

int main() {

	int i = 0;

	while (i <= 127) {
		
		if (i != 27) {
			cout << i << " "
				<< (char)i << " ";
		}
		else
		{
			cout << i << " "
				<< (char)(i) << " ";
			//cout << "  ";
		}
		if (i % 16 == 0)
			cout << endl;
		i++;
	}

	return 0;
}





