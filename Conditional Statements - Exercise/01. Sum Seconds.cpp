#include <iostream>
using namespace std;

int main()
{
    int timeFirst;
    int timeSecond;
    int timeThird;

    cin >> timeFirst;
    cin >> timeSecond;
    cin >> timeThird;

    int TotalTime = timeFirst + timeSecond + timeThird;

    int minutes = TotalTime / 60;
    int seconds = TotalTime % 60;

    if (seconds < 10) {
        cout << minutes << ":0" << seconds << endl;
    }
    else {
        cout << minutes << ":" << seconds << endl;
    }
}
