// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    cout << "Enter your desired integer:\n";
    int n = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "the number " << n << " is even.\n";
    }
    else
    {
        cout << "the number " << n << " odd.\n";
    }

    return 0;
}