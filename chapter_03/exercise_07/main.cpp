// This program outputs the message "Hello, World!" to the monitor
#include "std_lib_facilities.h"

int main(int argc, char const *argv[]) // C++ programs start by executing the function main
{
    cout << "How many names you would like to sort?\n";
    int v_size = 0;
    cin >> v_size;
    cout << "############################################\n";
    vector<string> v;
    for (size_t i = 0; i < v_size; i++)
    {
        string dummy = " ";
        cin >> dummy;
        v.push_back(dummy);
    }
    cout << "Unsorted vector is:\n";
    for (auto n : v)
    {
        cout << n << ' ';
        cout << '\n';
    }
    cout << "############################################\n";
    sort(v.begin(), v.end());

    cout << "Sorted vector is:\n";
    for (auto n : v)
    {
        cout << n << ' ';
        cout << '\n';
    }

    cout << "############################################\n";
    return 0;
}