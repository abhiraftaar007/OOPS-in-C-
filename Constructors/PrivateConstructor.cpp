#include <bits/stdc++.h>
using namespace std;

/*
Yes, Constructor can be defined in private section of class

How to use Constructors in private section?
1. Using Friend Class : If we want that class should not be instantiated by anyone else but only by a friend class.
2. Using Singleton design pattern
3. Named Constructor idiom - you declare all the class’s constructors in the private or protected sections,
and then for accessing objects of class, you create public static functions.

*/

// Using friend class
class A
{
private:
    A()
    {
        cout << "Constructor of A \n";
    }

    friend class B;
};

// class B, friend of class A
class B
{
public:
    B()
    {
        A a1;
        cout << "Constructor of B\n";
    }
};

// Named Constructor idiom
class Point
{
private:
    float x1, y1;

    Point(float x, float y)
    {
        x1 = x;
        y1 = y;
    };

public:
    // polar(radius, angle)
    static Point Polar(float, float);

    // rectangular(x,y)
    static Point Rectangular(float, float);

    void display();
};

// return polar coordinates
Point Point::Polar(float x, float y)
{
    return Point(x * cos(y), x * sin(y));
}

// return rectangular coordinates
Point Point::Rectangular(float x, float y)
{
    return Point(x, y);
}

void Point::display(){
    cout << "x :: " << this->x1 << endl;
    cout << "y :: " << this->y1 << endl;
}

int main()
{
    B b1; // If you comment the line friend class B, you will encounter below error

    // Polar coordinates
    Point pp = Point::Polar(5.7, 1.2);
    cout << "polar coordinates \n";
    pp.display();

    // rectangular coordinates
    Point pr = Point::Rectangular(5.7, 1.2);
    cout << "rectangular coordinates \n";
    pr.display();
    
    return 0;
}