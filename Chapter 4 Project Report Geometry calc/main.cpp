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
			}
			else {
				area = radius * radius;
				cout << fixed << setprecision(2);
				cout << "The area of the circle is: " << area << endl;
			}
		} if (choice == 2) {
			// Rectangle area
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the width of the rectangle: ";
			cin >> width;
			if (length < 0 || width < 0) {
				cout << "Error: Length and width cannot be negative." << endl;
			}
			else {
				area = length * width;
				cout << fixed << setprecision(2);
				cout << "The area of the rectangle is: " << area << endl;
			}
		} if (choice == 3) {
			// Triangle area
			cout << "Enter the base of the triangle: ";
			cin >> base;
			cout << "Enter the height of the triangle: ";
			cin >> height;
			if (base < 0 || height < 0) {
				cout << "Error: Base and height cannot be negative." << endl;
			}
			else {
				area = 0.5 * base * height;
				cout << fixed << setprecision(2);
				cout << "The area of the triangle is: " << area << endl;
			}
		} if (choice == 4) {
			// Quit
			cout << "Exiting the program. Goodbye!" << endl;
		} else {
			cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
		}
	}

	return 0;
}