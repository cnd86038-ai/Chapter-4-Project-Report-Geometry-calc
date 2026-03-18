#include <iostream>
#include <cmath> // for sqrt()
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

		// Handle user choice
		if (choice == 1) {
			// Circle area
			cout << "Enter the radius of the circle: ";
			cin >> radius;
			if (radius < 0) {
				cout << "Error: Radius cannot be negative." << endl;
			} else {
				area = radius * radius;
				cout << fixed << setprecision(2);
				cout << "The area of the circle is: " << area << endl;
			}
