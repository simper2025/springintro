#include <iostream>
#include <string>
#include <iomanip>

using namespace std;




string Letter(string name);

void MakeLetter();

int Sum(int, int);

int main() {
	
	cout << Sum(5, 6) <<endl;

	int num1 = 45;
	int num2 = -37;

	cout << Sum(num1, num2) << endl;

	MakeLetter();

	int num = 62;
	char c = (char)num;
	cout << c;


	return 0;
}


int Sum(int a, int b)
{
	return a + b;
}


string Letter(string name) {
	return "Dear " + name + ", \nI am writing to inform you that you owe " +
		"the sum of $20. \n\nSincerly,\nYour Grandmother";
}



void MakeLetter() {
	string name;
	cout << "Please enter your name: ";
	cin >> name;

	string letter = Letter(name);
	cout << letter << endl;
}




