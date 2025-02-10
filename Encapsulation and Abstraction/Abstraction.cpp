#include<bits/stdc++.h>
using namespace std;

/*
Abstraction in C++ -
Abstraction means displaying only essential information and ignoring the details.
Data abstraction refers to providing only essential information about the data to the outside world, 
ignoring unnecessary details or implementation.

Consider a real-life example of a man driving a car.

Types of Abstraction:
1. Data abstraction - This type only shows the required information about the data and ignores unnecessary details.
2. Control Abstraction -  This type only shows the required information about the implementation and ignores unnecessary details.
*/

/*
Abstraction using classes -
The class helps us to group data members and member functions using available access specifiers. 
A Class can decide which data member will be visible to the outside world and which is not.
*/

/*
Abstraction in Header files -
For example, consider the pow() method present in math.h header file.
*/

/*
Abstraction using Access Specifiers -
We can use access specifiers to enforce restrictions on class members.
*/

class implementAbstraction{
    private:
    int a,b;

    public:
    void set(int x, int y){
        a = x;
        b = y;
    }

    void display(){
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10,20);
    obj.display();

    return 0;
}

/*
Advantages of Data Abstraction -
1.Helps the user to avoid writing the low-level code
2.Avoids code duplication and increases reusability.
3.Can change the internal implementation of the class independently without affecting the user.
4.Helps to increase the security of an application or program as only important details are provided to the user.
5.It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.
6.New features or changes can be added to the system with minimal impact on existing code.

Q - Difference betweeen Abstraction and Encapsulation ????
*/