#include <iostream>

using namespace std;

int main() {

	int totals[] = { 1,2,3,4,5,12,3,45,6,7 };
	int scores[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "What grade did the student get for assignment #"
			<< i + 1 << ", out of " << totals[i] << " points? ";
		cin >>  scores[i];
	}

	double totalPoints = 0.0;
	double studentTotal = 0.0;
	for (int i = 0; i < 10; i++)
	{
		cout << "For assignment #" << i + 1 << " the student got " 
			<< ((double)scores[i]/ totals[i]) * 100.0 << "%.\n";
		totalPoints += totals[i];
		studentTotal += scores[i];
	}
	cout << "The students overall score is " << studentTotal / totalPoints * 100.0 << "%.\n";
	
	return 0;
}





