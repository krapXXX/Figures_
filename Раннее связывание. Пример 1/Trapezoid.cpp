#include <iostream>
#include "Trapezoid.h"
using namespace std;

void Trapezoid::ShowArea() const
{
	cout << "Area of trapezoid: " << m_value1 * m_value2 << endl;
}
