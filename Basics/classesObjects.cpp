#include<bits/stdc++.h>
using namespace std;

/*
class is like a blueprint for an object.
A class is a user-defined data type, which holds its own data members and member functions,
which can be accessed and used by creating an instance of that class.
like Cars is a class - speed limit, Mileage range etc are properties
Object is an instance of a Class.
When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
*/

// class - keyword, Person - user-defined name
class Person{
    public: // Access specifier - public, private or protected

    // Data members
    string name;
    int age;

    // Member function to introduce the person
    void introduce(){
        cout << name <<" " << age << endl;
    }

};

int main()
{
    Person person1;

    // accessing data members
    person1.name = "Abhi";
    person1.age = 30;

    // call the introduce member method
    person1.introduce();
    

    return 0;
}