#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Rhombus.h"
#include "Square.h"
#include "Trapezoid.h"

int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
    Rhombus rhombus;
    Square square;
    Trapezoid trapezoid;

    circle.SetDimension(10.0);
    circle.ShowArea();
    
    rectangle.SetDimension(5.5, 10.0);
    rectangle.ShowArea();

    triangle.SetDimension(5.5, 10.0);
    triangle.ShowArea();

    rhombus.SetDimension(5.5, 10.0);
    rhombus.ShowArea();

    square.SetDimension(5.5, 10.0);
    square.ShowArea();

    trapezoid.SetDimension(5.5, 10.0);
    trapezoid.ShowArea();



    return 0;
}