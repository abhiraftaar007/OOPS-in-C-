#include<bits/stdc++.h>
using namespace std;

/*
Compile Time Polymorphism -
This type of polymorphism is achieved by function overloading or operator overloading.
*/

/*
Function Overloading -
When there are multiple functions with the same name but different parameters,
then the functions are said to be overloaded,
hence this is known as Function Overloading.

Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.
*/

class FunctionOverloading{
    public:
    void func(int x){
        cout << x << endl;
    }

    void func(double x){
        cout << x << endl;
    }

    void func(int x, int y){
        cout << x << " " << y << endl;
    }
};

/*
Operator Overloading -
C++ has the ability to provide the operators with a special meaning for a data type,
this ability is known as operator overloading.
So a single operator ‘+’, when placed between integer operands, adds them and when placed between string operands, concatenates them
*/

class Complex{
    private:
    int real, imag;

    public:
    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }

    // This is automatically called
    // when '+' is used with between
    // two Complex objects
    Complex operator+(Complex const& obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    /*
    the operator ‘+’ is overloaded. Usually, this operator is used to add two numbers (integers or floating point numbers)
    but here the operator is made to perform the addition of two imaginary or complex numbers.
    */

    void print(){
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    FunctionOverloading obj1;
    obj1.func(7);
    obj1.func(9.123);
    obj1.func(7,9);

    Complex c1(10,5), c2(2,4);
    Complex c3 = c1 + c2;
    c3.print();

    return 0;
}