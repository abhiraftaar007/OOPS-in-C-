#include <bits/stdc++.h>
using namespace std;

/*

Encapsulation in C++ is defined as the wrapping up of data and information in a single unit.
In OOPS, Encapsulation is defined as binding together the data and the functions that manipulate them.

access specifiers play an important role in implementing encapsulation in C++

real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc.
For accessing particular section, you cannot directly access them.

Two Important Property of Encapsulation -
1. Data Protection: Encapsulation protects the internal state of an object by keeping its data members private.
Access to and modification of these data members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
2. Information Hiding: Encapsulation hides the internal implementation details of a class from external code.
Only the public interface of the class is accessible,
providing abstraction and simplifying the usage of the class
while allowing the internal implementation to be modified without impacting external code.

*/

/*

Features of Encapsulation -
1. We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class.
2. The function which we are making inside the class must use only member variables, only then it is called encapsulation.
3. Encapsulation improves readability, maintainability, and security by grouping data and methods together.
4. It helps to control the modification of our data members.
5. Encapsulation also leads to data abstraction. Using encapsulation also hides the data.
as in the above example, the data of the sections like sales, finance, or accounts are hidden from any other section.

*/

class Temp
{
    int a, b;

public:
    int solve(int input)
    {
        a = input;
        b = a / 2;
        return b;
    }
};

class Person
{
private:
    // Data hidden from outside world
    string name;
    int age;

public:
    // Functions that can access and modify data members
    // These data members + member functions = encapsulation
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return name;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    int getAge()
    {
        return age;
    }
};

class Circle
{
private:
    float area;
    float radius;

public:
    void getRadius()
    {
        cout << "Enter radius \n";
        cin >> radius;
    }

    void findArea()
    {
        area = 3.14 * radius * radius;
        cout << "Area of Circle = " << area;
    }
};

int main()
{
    int n = 90;
    // cin >> n;

    Temp half;
    int ans = half.solve(n);
    cout << ans << endl;

    Person p("Abhi", 23);
    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    p.setName("Raftaar");
    p.setAge(50);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    Circle c;
    c.getRadius();
    c.findArea();

    return 0;
}