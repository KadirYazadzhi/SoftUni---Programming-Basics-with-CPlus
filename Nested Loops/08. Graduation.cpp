#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string studentName;
    getline(cin, studentName);

    int currentClass = 1;
    int excludedCount = 0;
    double totalGrade = 0.0;

    while (currentClass <= 12) {
        double annualGrade;
        cin >> annualGrade;

        if (annualGrade < 4.00) {
            excludedCount++;
            cout << studentName << " has been excluded at " << currentClass << " grade" << endl;
            break;
        }

        totalGrade += annualGrade;
        currentClass++;
    }

    if (excludedCount == 0 && currentClass > 12) {
        double averageGrade = totalGrade / 12;
        cout << studentName << " graduated. Average grade: " << fixed << setprecision(2) << averageGrade << endl;
    }

    return 0;
}
