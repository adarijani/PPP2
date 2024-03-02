// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    cout << "Enter operator followed by a number followed by another number\n";

    double x = 0.0;
    double y = 0.0;
    string op = " ";
    cin >> op >> x >> y;
    if (op == "+")
    {
        cout << "the sum is equal to: " << x + y << "\n";
    }
    else
    {
        if (op == "-")
        {
            cout << "first number - second number is equal to: " << x - y << "\n";
        }
        else
        {
            if (op == "*")
            {
                cout << "the product is equal to: " << x * y << "\n";
            }
            else
            {
                if (op == "/")
                {
                    cout << "first number/second number is equal to: " << x / y << "\n";
                }
                else
                {
                    cout << "you have given an invalid operator.\n";
                }
            }
        }
    }

    return 0;
}