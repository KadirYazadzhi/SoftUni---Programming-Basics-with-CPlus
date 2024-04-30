#include <iostream>
#include <string>

using namespace std;

int main() {
    int countJury;
    cin >> countJury;
    cin.ignore();

    cout.setf(ios::fixed);
    cout.precision(2);

    double sumAllGrades = 0.00;
    int countAllGrades = 0;

    string input;
    getline(cin, input);

    while (input != "Finish") {
        string presentation = input;

        double sumGradesPerPresentation = 0;

        for (int jury = 1; jury <= countJury; jury++) {
            double grade;
            cin >> grade;
            sumGradesPerPresentation += grade;

            sumAllGrades += grade;
            countAllGrades++;
        }

        double averageGradePerPresentation = sumGradesPerPresentation / countJury;
        cout << presentation << " - " << averageGradePerPresentation << "." << endl;

        cin.ignore();
        getline(cin, input);
    }

    double averageAll = sumAllGrades / countAllGrades;
    cout << "Student's final assessment is " << averageAll << "." << endl;

}
