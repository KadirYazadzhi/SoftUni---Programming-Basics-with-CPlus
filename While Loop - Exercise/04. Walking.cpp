#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int GOALS = 10000;
    string krachki;
    int Total = 0;

    while (true)
    {
        getline(cin, krachki);
        if (krachki == "Going home")
        {
            int stepsToHome;
            cin >> stepsToHome;
            Total += stepsToHome;
            int remainingSteps = GOALS - Total;

            if (Total >= GOALS)
            {
                cout << "Goal reached! Good job!" << endl;
            }
            else
            {
                cout << remainingSteps << " more steps to reach goal." << endl;
            }
            break;
        }

        int steps = stoi(krachki);
        Total += steps;

        if (Total >= GOALS)
        {
            cout << "Goal reached! Good job!" << endl;
            break;
        }
    }

    return 0;
}

