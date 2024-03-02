// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    cout << "enter two floating-point numbers.\n";
    double val_01 = 0;
    double val_02 = 0;
    cin >> val_01 >> val_02;
    double sum = val_01 + val_02;
    double product = val_01 * val_02;
    double first_o_second = (double)(val_01) / (double)(val_02);
    double second_o_first = (double)(val_02) / (double)(val_01);
    if (val_01 == val_02) // you should do this one my machine precision later on
    {
        cout << "the two numbers are equal.\n";
    }
    else
    {
        if (val_01 < val_02)
        {
            cout << "first number is the smaller one.\n";
        }
        else
        {
            cout << "second number is the smaller one.\n";
        }
    }
    cout << "the sum is: " << sum << "\n";
    cout << "the product is: " << product << "\n";
    cout << "the ratio val_01/val_02 is: " << first_o_second << "\n";
    cout << "the ratio val_02/val_01 is: " << second_o_first << "\n";

    return 0;
}
