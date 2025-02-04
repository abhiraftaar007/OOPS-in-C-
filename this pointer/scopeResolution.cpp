#include <bits/stdc++.h>
using namespace std;

/*
Scope resolution operator is for accessing static or
class members and this pointer is for accessing object members
when there is a local variable with the same name.

*/

class Test
{
    int a;
    static int b;

public:
    Test()
    {
        a = 1;
    }

    // Local parameter 'a' hides class member 'a'
    void func(int a)
    {
        // cout << a;

        // // Then how to output the class’s ‘a’. This is where this pointer comes in handy.
        // this pointer points to the object
        cout << this->a << '\n';

        /*
        We cannot use the scope resolution operator in the above example to print the object’s member ‘a’ 
        because the scope resolution operator can only be used for a static data member (or class members).
        */
        cout << Test::b;
    }
};

// In C++, static members must be explicitly defined
// like this
int Test::b=1;

int main()
{
    Test obj;
    int k = 3;
    obj.func(k);
    // since the “a” passed as an argument to the func shadows the “a” of the class .i.e 1

    return 0;
}