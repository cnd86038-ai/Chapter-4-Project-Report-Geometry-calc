#include <iostream>
#include <cmath> // for sqrt() and M_PI
#include <iomanip> // for formatting output
using namespace std;

int main() {
	int choice;
	double radius, length, width, base, height, area;

	{
		// Display menu
		cout << "Geometry Calculator" << endl;
		cout << "1. Calculate the Area of a Circle" << endl;
		cout << "2. Calculate the Area of a Rectangle" << endl;
		cout << "3. Calculate the Area of a Triangle" << endl;
		cout << "4. Quit" << endl;
		cout << "Enter your choice (1-4): ";
		cin >> choice;