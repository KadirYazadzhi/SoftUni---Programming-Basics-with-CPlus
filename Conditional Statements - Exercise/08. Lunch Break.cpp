#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string seriesName;
    int seriesTime, ChillTime;
    getline(cin, seriesName);
    cin >> seriesTime >> ChillTime;

    double timeForBrake = 1 / 8.0 * ChillTime;
    double timeForChilling = 1 / 4.0 * ChillTime;
    double totalNujnoVreme = timeForBrake + timeForChilling + seriesTime;

    if (totalNujnoVreme <= ChillTime) {
        cout << "You have enough time to watch" << " " << seriesName << " " << "and left with" <<
             " " << ceil(ChillTime - totalNujnoVreme) << " " << "minutes free time." << endl;
    }
    else {
        cout << "You don't have enough time to watch" << " " << seriesName << "," << " " << "you need" <<
             " " << ceil(totalNujnoVreme - ChillTime) << " " << "more minutes." << endl;
    }
}
