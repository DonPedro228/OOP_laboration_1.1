#include "triangle_1.h"
#include <iostream>

using namespace std;

void Triangle::SetFirst(double value) {
	first = value;
}

void Triangle::SetSecond(double value) {
	second = value;
}

bool Triangle::Init(double one, double two) {
	if (one <= 0) {
		cout << "Error: Sides must be positive numbers." << endl;
		return false;
	}
	if (two <= 0) {
		cout << "Error: Sides must be positive numbers." << endl;
		return false;
	}
	else {
		first = one;
		second = two;
		return true;
	}
}


void Triangle::Display() const
{
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

void Triangle::Read()
{
	double x, y;
	do {
		cout << "first = ";
		cin >> x;
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}

double Triangle::hypotenuse(double one, double two)
{
	first = one;
	second = two;
	double c = sqrt(pow(first, 2) + pow(second, 2));
	return c;
}



