#include <iostream>
#include <string>
#include <fstream>

using namespace std;




int main() {

	ifstream input;

	input.open("name.txt");

	string item;

	//while (input >> item) 
	while (getline(input, item)) 
	{
		cout << item << endl;
	}

	input.close();

	ofstream output;

	output.open("output.txt");

	cin >> item;
	output << item;

	output.close();

	return 0;
}






