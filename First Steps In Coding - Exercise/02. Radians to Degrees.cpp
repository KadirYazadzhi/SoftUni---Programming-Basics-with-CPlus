#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double PI = 3.14159;

    double radians;
    cin >> radians;

    double degrees = radians * 180 / PI;

    cout << round(degrees) << endl;
    return 0;
}
