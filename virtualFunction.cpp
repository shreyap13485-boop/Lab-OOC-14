#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

class Shape
{
public:
    // Virtual function to calculate area
    virtual double calculateArea() = 0;

    // Virtual function to calculate perimeter
    virtual double calculatePerimeter() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override
    {
        return PI * radius * radius;
    }

    double calculatePerimeter() override
    {
        return 2 * PI * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override
    {
        return length * width;
    }

    double calculatePerimeter() override
    {
        return 2 * (length + width);
    }
};

class Triangle : public Shape
{
private:
    double side1, side2, side3;

public:
    Triangle(double a, double b, double c)
        : side1(a), side2(b), side3(c) {}

    double calculateArea() override
    {
        // Heron's formula
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) *
                    (s - side2) * (s - side3));
    }

    double calculatePerimeter() override
    {
        return side1 + side2 + side3;
    }
};

int main()
{
    // Create instances of different shapes
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
    Triangle triangle(4.0, 4.0, 3.2);

    // Calculate and display the area and perimeter
    cout << "Circle:" << endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Perimeter: "
         << circle.calculatePerimeter() << endl;

    cout << "\nRectangle:" << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: "
         << rectangle.calculatePerimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: "
         << triangle.calculatePerimeter() << endl;

    return 0;
}
