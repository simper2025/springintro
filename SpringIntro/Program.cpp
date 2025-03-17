#include <iostream>
using namespace std;


string ConvertToHex(int value) {
	string retval = "";
	int num;
	char val;


	while (value > 0) {
		num = value % 16;
		val = (char)(48 + num);
		if (val > 58)
			val += 39;
		retval.push_back(val);
		value = value / 16;
	}

	val = retval[0];
	retval[0] = retval[1];
	retval[1] = val;

	return retval;
}

int main() {

	string input;

	cin >> input;

	char c;
	int value;

	for (int i = 0; i < input.size(); i++)
	{
		c = input[i];
		value = c;

		
		cout <<  //c << ": " << value << ", " << 
			ConvertToHex(value) << " ";
		
	}


	return 0;
}






