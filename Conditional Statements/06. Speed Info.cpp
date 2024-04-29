#include <iostream>
using namespace std;

int main()
{
    double skorost = 0;
    cin >> skorost;

    if (skorost <= 10) {
        cout << "slow" << endl;
    }
    else if (skorost > 10 && skorost <= 50)
    {
        cout << "average" << endl;
    }
    else if (skorost > 50 && skorost <= 150)
    {
        cout << "fast" << endl;
    }
    else if (skorost > 150 && skorost <= 1000)
    {
        cout << "ultra fast" << endl;
    }
    else if (skorost > 1000)
    {
        cout << "extremely fast" << endl;
    }
}
