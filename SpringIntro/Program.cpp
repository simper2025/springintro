#include <iostream>

using namespace std;



void printList(int list[], int size) {
	for (int i = 0; i < size; i++) {
		cout << list[i] << ", ";
	}
	cout << endl;
}

void printValue(int num) {
	cout << num << "\n";
}

int main() {
	
	int regular[5];
	int initialized[] = { 1,2,3,4,5 };
	int partInitialized[5] = { 1,2 };

	for (int i = 2; i < 5; i++) {
		partInitialized[i] = 100;
	}
	printValue(4);
	printValue(partInitialized[3]);
	printList(partInitialized, 6);
	
	return 0;
}





