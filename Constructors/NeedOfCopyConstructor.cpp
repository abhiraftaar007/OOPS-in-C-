#include <bits/stdc++.h>
using namespace std;

/*
Need of User Defined Copy Constructor

If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which works fine in general.

we need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource like a file handle,
a network connection, etc because the default constructor does only shallow copy.

Shallow Copy means that only the pointers will be copied not the actual resources that the pointers are pointing to.
This can lead to dangling pointers if the original object is deleted.This can lead to dangling pointers if the original object is deleted.

Deep copy is possible only with a user-defined copy constructor.
In a user-defined copy constructor,
we make sure that pointers (or references) of copied objects point to new copy of the dynamic resource
allocated manually in the copy constructor using new operators.

Yes, a copy constructor can be made private. When we make a copy constructor private in a class, objects of that class become non-copyable.
*/

class String
{
private:
    char *s;
    int size;

public:
    String(const char *str = NULL);

    ~String()
    {
        delete[] s;
    }

    // copy constructor
    String(const String &);

    void print()
    {
        cout << s << endl;
    }

    void change(const char *);
};

// definition of constructor and member functions
String::String(const char *str)
{
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

/*
Why argument to a copy constructor should be const?
One reason for passing const reference is, that we should use const in C++ wherever possible so that objects are not accidentally modified.
*/
String::String(const String &old_str)
{
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}

void String::change(const char *str)
{
    delete[] s;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

int main()
{
    String str1("Abhi");

    // create str2 from str1
    // String str2 = str1;
    String str2(str1);

    str1.print();
    str2.print();

    str2.change("Raftaar");

    str1.print();
    str2.print();

    /*
    If we remove the copy constructor from the above program, we don’t get the expected output. 
    The changes made to str2 reflect in str1 as well which is never expected. 
    Also, if the str1 is destroyed, the str2’s data member s will be pointing to the deallocated memory.
    */
    return 0;
}