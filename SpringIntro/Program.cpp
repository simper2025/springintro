#include <iostream>
using namespace std;

void printArray(int prefix, int a[], int size);

int main() {

	const int SIZE = 13;
	int arr[SIZE] = { 21,4,6,14,8,43,9,2,1,3,56,7,22 };
	//int arr[SIZE] = { 13,12,11,10,9,8,7,6,5,4,3,2,1 };

	printArray(-1, arr, SIZE);

	for (int j = 0; j < SIZE - 1; j++) {
		bool sorted = true;

		for (int i = 0; i < SIZE - 1 - j; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				sorted = false;
			}
			break;
		}
		printArray(j, arr, SIZE);
		if (sorted) {
			break;
		}
	}


	return 0;


}



void printArray(int prefix, int a[], int size) {
	cout << "#" << prefix << ": ";
	for (int i = 0; i < size; i++) {
		cout << a[i] << ", ";
	}
	cout << endl;
}



