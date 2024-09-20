#include <iostream>

#include "Addition.h"

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    cout << "Hello, Google Test!" << endl;

    int x = 3;
    int y = 7;

    int sum = Addition::twoValues(x, y);
    cout << "Sum is: " << sum << endl;

    return 0;
}