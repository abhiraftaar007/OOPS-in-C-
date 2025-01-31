#include <bits/stdc++.h>
using namespace std;

/*
a friend function can be granted special access to private and protected members of a class in C++.

They are not the member functions of the class but can access and manipulate the private and protected members of that class for they are declared as friends.

A friend function can be:
1. A global function
2. A member function of another class

The order in which we define the friend function of another class is important and should be taken care of.

We always have to define both the classes before the function definition. 
Thats why we have used out of class member function definition.

*/

/*
Global Function as Friend Function
*/

class base
{
private:
    int private_var;

protected:
    int protected_var;

public:
    base()
    {
        private_var = 10;
        protected_var = 90;
    }

    // friend function declaration
    friend void friendFunction(base &obj);
};

void friendFunction(base &ob)
{
    ob.private_var += 1;
    ob.protected_var += 1;

    cout << "Private Variable: " << ob.private_var
         << endl;
    cout << "Protected Variable: " << ob.protected_var;
}

/*
Member Function of Another Class as Friend Function
*/

class base2; // forward definition needed another class in which function is declared

class anotherClass
{
public:
    void memberFunction(base2 &ob);
};

// base class for which friend is declared
class base2
{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    base2()
    {
        private_variable = 10;
        protected_variable = 99;
    }

    // friend function declaration
    friend void anotherClass::memberFunction(base2 &);
};

// friend function definition
void anotherClass::memberFunction(base2 &obj)
{
    obj.private_variable += 1;
    obj.protected_variable += 1;

    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}

int main()
{
    base obj1;
    friendFunction(obj1);

    cout << endl;

    base2 obj2;
    anotherClass obj3;
    obj3.memberFunction(obj2);

    return 0;
}

/*
Features of Friend Functions -
1. privilege to access the private and protected data of a class.
2. A friend function is a non-member function or ordinary function of a class,
which is declared as a friend using the keyword “friend” inside the class.
3. keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
4. A friend function is called like an ordinary function. It cannot be called using the object name and dot operator.
5. it may accept the object as an argument whose value it wants to access.
6. A friend function can be declared in any section of the class i.e. public or private or protected.
*/
