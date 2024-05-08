#include <iostream>

using namespace std;

int main()
{
    int startNumber;
    cin >> startNumber;

    int endNumber;
    cin >> endNumber;

    int magicNumber;
    cin >> magicNumber;

    int count = 0;
    for(int x1 = startNumber; x1 <= endNumber; x1++)
    {
        for (int x2 = startNumber; x2 <= endNumber; x2++)
        {
            count++;
            if(x1 + x2 == magicNumber)
            {
                cout << "Combination N:" << count << " (" << x1 << " + " << x2 << " = " << magicNumber << ")";
                return 0;
            }
        }
    }

    cout << count << " combinations - neither equals " << magicNumber;
    return 0;
}
