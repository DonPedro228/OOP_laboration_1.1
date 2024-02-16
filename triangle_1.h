#pragma once
#include <cmath>

using namespace std;

class Triangle
{
private:
	double first;
	double second;

public:
	double GetFirst() const {
		return first;
	}

	double GetSecond() const {
		return second;
	}

	void SetFirst(double value);

	void SetSecond(double value);

	bool Init(double one, double two);
	void Display() const;
	void Read();

	double hypotenuse(double one, double two);
};

