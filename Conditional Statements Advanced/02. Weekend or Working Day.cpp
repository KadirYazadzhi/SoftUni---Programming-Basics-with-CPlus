#include <iostream>
#include <string>

using namespace std;

int main() {
    string Weekend = "Weekend";
    string WORKING_DAYS = "Working day";
    string Day;

    cin >> Day;

    if (Day == "Monday" || Day == "Tuesday" || Day == "Wednesday" || Day == "Thursday" || Day == "Friday") {
        cout << WORKING_DAYS << endl;
    }
    else if (Day == "Saturday" || Day == "Sunday") {
        cout << Weekend << endl;
    }
    else {
        cout << "Error" << endl;
    }
}
