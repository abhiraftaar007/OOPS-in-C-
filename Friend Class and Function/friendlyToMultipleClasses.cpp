#include <bits/stdc++.h>
using namespace std;

// A Function Friendly to Multiple Classes

// forward declaration
class ABC;

class XYZ
{
    int x;

public:
    void set_data(int a)
    {
        x = a;
    }

    friend void max(XYZ, ABC);
};

class ABC
{
    int y;

public:
    void set_data(int a)
    {
        y = a;
    }

    friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2)
{
    (t1.x > t2.y) ? cout << t1.x : cout << t2.y;
}

int main()
{
    ABC a;
    XYZ x;

    x.set_data(200);
    a.set_data(35);

    // calling friend function
    max(x, a);

    return 0;
}

/*
Advantages of Friend Functions-
1. It is able to access members without the need of inheriting the class.
2. It acts as a bridge between two classes by accessing their private data.
3. It can be used to increase the versatility of overloaded operators.
4. It can be declared either in the public or private or protected part of the class.

Disadvantages of Friend Functions-
1. It has access to private members of a class from outside the class which violates the law of data hiding.
2. Friend functions cannot do any run-time polymorphism in their members.

Important Points -
1. Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
Friendship is not inherited. (See this for more details)
2. The concept of friends is not in Java.
3. Friends should be used only for limited purposes. 
Too many functions or external classes are declared as friends of a class with protected or private data access 
lessens the value of encapsulation of separate classes in object-oriented programming.

*/