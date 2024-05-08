#include <iostream>

using namespace std;

int main()
{
    for(int hours = 0; hours <= 23; hours++)
    {
        for(int minute = 0; minute <= 59; minute++)
        {
            cout << hours << ":" << minute << endl;
        }
    }
}
