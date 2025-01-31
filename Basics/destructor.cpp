#include <bits/stdc++.h>
using namespace std;

/*
Destructor is another special member function that is called by the compiler when the scope of the object ends.

It deallocates all the memory previously used by the object of the class so that there will be no memory leaks.

The destructor also have the same name as the class but with tilde(~) as prefix.


*/

class Person
{
public:
    int id;

    // Destructor
    ~Person()
    {
        cout << "Destructor called for id: " << id << endl;
    }
};

int main()
{
    Person p1;
    p1.id = 7;
    int i = 0;
    while (i < 5)
    {
        Person p2;
        p2.id = i;
        i++;
    } // scope for p2 ends here

    return 0;

    return 0;
} // scope for p1 ends here