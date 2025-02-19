#include <iostream>

using namespace std;



int main() {
	
	srand(time(0));

	int min = rand();
	int max = rand();

	for (int i = 0; i < 10000; i++) {
		int random = rand();
		if (random > max)
			max = random;
		if (random < min)
			min = random;
	}

	cout << min << endl;
	cout << max << endl;

	return 0;
}





