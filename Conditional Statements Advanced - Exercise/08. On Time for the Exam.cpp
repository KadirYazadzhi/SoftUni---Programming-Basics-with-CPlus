#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int examHour, examMinute, arrivalHour, arrivalMinute;

    cin >> examHour;

    cin >> examMinute;

    cin >> arrivalHour;

    cin >> arrivalMinute;


    int examTime = examHour * 60 + examMinute;
    int arrivalTime = arrivalHour * 60 + arrivalMinute;


    if (arrivalTime > examTime) {
        cout << "Late\n";
    }
    else if (examTime - arrivalTime <= 30) {
        cout << "On time\n";
    }
    else {
        cout << "Early\n";
    }

    int timeDifference = abs(examTime - arrivalTime);
    int hoursDifference = timeDifference / 60;
    int minutesDifference = timeDifference % 60;

    if (arrivalTime < examTime) {
        if (timeDifference < 60) {
            cout << minutesDifference << " minutes before the start\n";
        }
        else {
            cout << hoursDifference << ":" << setw(2) << setfill('0') << minutesDifference
                 << " hours before the start\n";
        }
    }
    else {
        if (timeDifference < 60) {
            cout << minutesDifference << " minutes after the start\n";
        }
        else {
            cout << hoursDifference << ":" << setw(2) << setfill('0') << minutesDifference
                 << " hours after the start\n";
        }
    }

    return 0;
}
