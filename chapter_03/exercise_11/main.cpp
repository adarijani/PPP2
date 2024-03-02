// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    //     You have 23 pennies.
    // You have 17 nickels.
    // You have 14 dimes.
    // You have 7 quarters.
    // You have 3 half dollars.
    // The value of all of your coins is 573 cents.
    cout << "enter the number of penni(es) you have.\n";
    int penny = 0;
    cin >> penny;
    cout << "enter the number of nickel(s) you have.\n";
    int nickel = 0;
    cin >> nickel;
    cout << "enter the number of dim(es) you have.\n";
    int dime = 0;
    cin >> dime;
    cout << "enter the number of quarter(s) you have.\n";
    int quarter = 0;
    cin >> quarter;
    cout << "enter the number of half dollar(s) you have.\n";
    int half_dollar = 0;
    cin >> half_dollar;
    cout << "enter the number of dollar(s) you have.\n";
    int dollar = 0;
    cin >> dollar;
    int total_mon_cent = 100 * dollar + 50 * half_dollar + 25 * quarter + 10 * dime + 5 * nickel + penny;
    cout << "you have " << total_mon_cent << " in cent(s).\n";
    return 0;
}