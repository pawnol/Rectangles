/*
Rectangles
Name
Date
This program uses a Rectangle class to represent
a rectangle. For this exercise, you must add the calls
to main() to find the area and perimeter of
the rectangles r1 and r2 (HINT: look at the methods 
provided in the class), and print them to the console.
In addition, create a third Rectangle object called 
r3 with a length of 6 and a width of 6. Just like r1 and
r2, add the calls to find the area and perimeter of the
rectangle, and display these values to the console.
*/
#include <iostream>
using namespace std;

/*
Represents a rectangle with a given length and width.
*/
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }

    double calculateArea()
    {
        return length * width;
    }

    double calculatePerimeter()
    {
        return 2 * length + 2 * width;
    }
};

int main()
{
    Rectangle r1(4, 7);
    Rectangle r2(3.5, 5.5);
    // Add code here!

    return 0;
}
