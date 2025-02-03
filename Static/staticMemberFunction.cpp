#include <bits/stdc++.h>
using namespace std;

/*
The static keyword is used with a variable to make the memory of the variable
static once a static variable is declared
its memory can’t be changed.

Static members of a class are not associated with the objects of the class.
Just like a static variable once declared is allocated with memory that can’t be changed every object points to the same memory.

Once a static member is declared it will be treated as same for all the objects associated with the class.

A static member function is independent of any object of the class.
A static member function can be called even if no objects of the class exist.
A static member function can also be accessed using the class name through the scope resolution operator.
A static member function can access static data members and static member functions inside or outside of the class.
You can also use a static member function to determine how many objects of the class have been created.

Need - Static members are frequently used to store information that is shared by all objects in a class.

*/

class Student
{
public:
    // static member
    static int total;

    // Constructor called
    Student() { 
        total += 1; 
    }
};

int Student::total = 0;

class Box
{
private:
    static int length;
    static int breadth;
    static int height;

public:
    static void print()
    {
        cout << "The value of the length is: " << length << endl;
        cout << "The value of the breadth is: " << breadth << endl;
        cout << "The value of the height is: " << height << endl;
    }
};

// initialize the static data members

int Box ::length = 10;
int Box ::breadth = 20;
int Box ::height = 30;


int main()
{
    // Student 1 declared
    Student s1;
    cout << "Number of students:" << s1.total << endl;

    // Student 2 declared
    Student s2;
    cout << "Number of students:" << s2.total << endl;

    // Student 3 declared
    Student s3;
    cout << "Number of students:" << s3.total << endl;

    Box b;

    cout << "Static member function is called through Object name: \n"
         << endl;
    b.print();

    cout << "\nStatic member function is called through Class name: \n"
         << endl;
    Box::print();

    return 0;
}