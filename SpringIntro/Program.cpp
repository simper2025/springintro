#include <iostream>
#include <string>
#include <fstream>

using namespace std;


struct Point {
	int X;
	int Y;
};


int main() {

	
	//int directionX = 1;
	//int directionY = 0;

	Point direction;
	direction.X = 1;
	direction.Y = 0;


	Point snek;
	snek.X = 12;
	snek.Y = 7;

	Point mouse = { 4, 17 };

	cout << "x = " << mouse.X << endl;
	cout << "y = " << mouse.Y << endl;


	return 0;
}






