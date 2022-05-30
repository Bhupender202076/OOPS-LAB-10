// Program to demonstrate the concept of Default constructor.

#include <iostream>
using namespace std;

class complex // class declaration
{

private:
    int a, b; // Data member

public:
    complex()
    { // Default constructor to initialise values
        a = 0;
        b = 0;
    }

    void printNumber()
    { // function to print the result
        cout << "The complex number is " << a << " + i" << b << "." << endl;
    }
};

int main()
{

    complex c1, c2; // object creation

    c1.printNumber(); // calling function
    return 0;
}
