// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    cout << "Enter the distance in miles\n";
    double dis_mile = 0;
    cin >> dis_mile;
    double dis_km = 0;
    dis_km = 1.609 * dis_mile;
    cout << dis_mile << " mile(s) is equal to " << dis_km << " in kiometer(s)";
    return 0;
}
