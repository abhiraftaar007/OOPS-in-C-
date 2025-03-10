#include <bits/stdc++.h>
using namespace std;

/*
A friend class can access private and protected members of other classes in which it is declared as a friend.

It is sometimes useful to allow a particular class to access private and protected members of other classes.

For example, a LinkedList class may be allowed to access private members of Node.

We can declare a friend class in C++ by using the friend keyword.

We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.


*/

class Device
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    Device()
    {
        private_variable = 10;
        protected_variable = 90;
    }

    // friend class declaration
    friend class Mobile;
};

// Here, class Mobile is declared as a
// friend inside class Device. Therefore,
// Mobile is a friend of class Device. Class Mobile
// can access the private members of
// class Device.

class Mobile
{
public:
    void display(Device &t)
    {
        t.protected_variable += 1;
        t.private_variable += 1;

        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

int main()
{
    Device d;
    Mobile m;

    m.display(d);

    return 0;
}