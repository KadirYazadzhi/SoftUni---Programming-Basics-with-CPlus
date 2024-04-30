#include <iostream>
#include <iomanip>
#include <string>
#include <limits.h>

using namespace std;

int main()
{
    int total;

    string number;

    while (true)
    {
        getline(cin, number);

        if (number == "Stop")
        {
            break;
        }
        else {

            if (stod(number) < total)
            {
                total = stod(number);
            }
        }
    }
    cout << total << endl;
}