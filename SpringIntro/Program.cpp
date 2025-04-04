#include <iostream>
#include <vector>

using namespace std;

void DoesStuff(vector<int> arr) {

}

int main() {

	vector<int> list = {34, 37, 12, 78};

	list.erase(list.begin() + 1);
	//vector<vector<int>> multilist;

	//list.push_back(37);
	
	list[0] = 2;

	int input = 1;

	while (input != 0) {
		cin >> input;
		list.push_back(input);
	}

	for (int i = 0; i < list.size(); i++) {
		cout << list[i] << ", ";
	}

	while (list.size() > 0)
	{
		input = list[list.size() - 1];
		list.pop_back();
	}

}






