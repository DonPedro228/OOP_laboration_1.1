#include <iostream>
#include "triangle_1.h"

using namespace std;

Triangle makeTriangle(double x, double y)
{
	Triangle nn;
	if (!nn.Init(x, y))
		cout << "Wrong argument!" << endl;
	return nn;
}


int main() {


    Triangle q;

    cout << "Enter new values for the triangle:" << endl;
    q.Read();

    q = makeTriangle(q.GetFirst(), q.GetSecond());

    
    cout << "Triangle after reading new values:" << endl;
    q.Display();

    double hyp = q.hypotenuse(q.GetFirst(), q.GetSecond());
    cout << "Hypotenuse after reading new values: " << hyp << endl;

    return 0;

}