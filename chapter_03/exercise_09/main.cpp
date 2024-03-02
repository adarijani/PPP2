// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    cout << "Enter your number in human language:\n";
    string number = " ";
    cin >> number;
    if (number == "one")
    {
        cout << "you have given 1 as the number.\n";
    }
    else
    {
        if (number == "two")
        {
            cout << "you have given 2 as the number.\n";
        }
        else
        {
            if (number == "three")
            {
                cout << "you have given 3 as the number.\n";
            }
            else
            {
                if (number == "four")
                {
                    cout << "you have given 4 as the number.\n";
                }
                else
                {
                    cout << "it is not a number that I know:-).\n";
                }
            }
        }
    }

    return 0;
}