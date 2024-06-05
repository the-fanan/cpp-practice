#include <iostream>

// we define where cin, cout, and endl come from and so we can call them directly without including their namespace
using std::cin;
using std::cout;
using std::endl;
// using cannot be delcared in header files
int main()
{
    // using cout without std::cout
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << endl;

    return 0;
}