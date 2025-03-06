#include<bits/stdc++.h>
using namespace std;

/*
A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class.
It tells the compiler to perform late binding where the compiler matches the object with the right called function and executes it during the runtime.
*/

// Calculate the area of shapes using virtual functions -

// Declaration of Base class
class Shape
{
public:
    // Usage of virtual constructor
    virtual void calculate()
    {
        cout << "Area of your Shape ";
    }
    // usage of virtual Destuctor to avoid memory leak
    virtual ~Shape()
    {
        cout << "Shape Destuctor Call\n";
    }
};

// Declaration of Derived class
class Rectangle : public Shape
{
public:
    int width, height, area;

    void calculate()
    {
        cout << "Enter Width of Rectangle: ";
        cin >> width;

        cout << "Enter Height of Rectangle: ";
        cin >> height;

        area = height * width;
        cout << "Area of Rectangle: " << area << "\n";
    }

    // Virtual Destuctor for every Derived class
    virtual ~Rectangle()
    {
        cout << "Rectangle Destuctor Call\n";
    }
};

// Declaration of 2nd derived class
class Square : public Shape
{
public:
    int side, area;

    void calculate()
    {
        cout << "Enter one side your of Square: ";
        cin >> side;

        area = side * side;
        cout << "Area of Square: " << area << "\n";
    }

    // Virtual Destuctor for every Derived class
    virtual ~Square()
    {
        cout << "Square Destuctor Call\n";
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // base class pointer
    Shape *S;
    Rectangle r;

    // initialization of reference variable
    S = &r;

    // calling of Rectangle function
    S->calculate();
    Square sq;

    // initialization of reference variable
    S = &sq;

    // calling of Square function
    S->calculate();

    return 0;
}