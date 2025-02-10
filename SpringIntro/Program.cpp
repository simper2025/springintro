#include <iostream>

using namespace std;

int main() {
	const int DAYS = 31;
	int eggs[DAYS];

	for (int i = 0; i < DAYS; i++)
	{
		cout << "How eggs did the chickens lay on day " << i+1 << ": ";
		cin >> eggs[i];
	}

	int total = 0;
	for (int i = 0; i < DAYS; i++)
	{
		total = total + eggs[i];
	}
	
	cout << "The chickens laid " << total << " eggs.\n";

	return 0;
}





