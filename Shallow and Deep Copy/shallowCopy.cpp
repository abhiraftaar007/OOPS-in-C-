#include <bits/stdc++.h>
using namespace std;

/*
creating a copy of an object means to create an exact replica of the object having the same literal value, data type, and resources.

There are two ways that are used by C++ compiler to create a copy of objects.
Copy Constructor
Assignment Operator

Depending upon the resources like dynamic memory held by the object,
either we need to perform Shallow Copy or Deep Copy in order to create a replica of the object.
*/

/*
Shallow Copy -
an object is created by simply copying the data of all variables of the original object.

This works well if none of the variables of the object are defined in the heap section of memory

if some variables are dynamically allocated memory from heap section,
then the copied object variable will also reference the same memory location.
This will create ambiguity and run-time errors, dangling pointer.

Since both objects will reference to the same memory location,
then change made by one will reflect those change in another object as well


Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy.

C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform shallow copy at compile time.
*/

class box
{
private:
    int length;
    int breadth;
    int height;
    int *p;

public:
    // Function that sets the dimensions

    void set_dimensions(int length1, int breadth1, int height1, int x)
    {
        length = length1;
        breadth = breadth1;
        height = height1;
        p = new int;
        *p = x;
    }

    // Function to display the dimensions
    // of the Box object
    void show_data()
    {
        cout << " Length = " << length
             << "\n Breadth = " << breadth
             << "\n Height = " << height
             << "\n P int pointing to = " << p
             << endl;
    }
};

int main()
{
    box B1, B3;

    B1.set_dimensions(14, 12, 16, 100);
    B1.show_data();

    // When copying the data of object at the time of initialization
    // then copy is made through COPY CONSTRUCTOR
    box B2 = B1;
    B2.show_data();

    // When copying the data of object after initialization then the
    // copy is done through DEFAULT ASSIGNMENT OPERATOR
    B3 = B1;
    B3.show_data();

    return 0;
}