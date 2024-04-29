#include <iostream>
#include <string>
using namespace std;

int main() {
    string Day;
    string Fruit;
    double broi;

    const double banana = 2.50;
    const double apple = 1.20;
    const double orange = 0.85;
    const double grapefruit = 1.45;
    const double kiwi = 2.70;
    const double pineapple = 5.50;
    const double grapes = 3.85;

    const double new_banana = 2.70;
    const double new_apple = 1.25;
    const double new_orange = 0.90;
    const double new_grapefruit = 1.60;
    const double new_kiwi = 3.00;
    const double new_pineapple = 5.60;
    const double new_grapes = 4.20;
    cin >> Fruit >> Day >> broi;

    cout.precision(2);
    cout.setf(ios::fixed);
    if (Day == "Monday" || Day == "Tuesday" || Day == "Wednesday" || Day == "Thursday" || Day == "Friday") {
        if (Fruit == "banana") {
            cout << banana * broi << endl;
        }
        else if (Fruit == "apple") {
            cout << apple * broi << endl;
        }
        else if (Fruit == "orange") {
            cout << orange * broi << endl;
        }
        else if (Fruit == "grapefruit") {
            cout << grapefruit * broi << endl;
        }
        else if (Fruit == "kiwi") {
            cout << kiwi * broi << endl;
        }
        else if (Fruit == "pineapple") {
            cout << pineapple * broi << endl;
        }
        else if (Fruit == "grapes") {
            cout << grapes * broi << endl;
        }
        else {
            cout << "error" << endl;
        }
    } else if (Day == "Saturday" || Day == "Sunday") {
        if (Fruit == "banana") {
            cout << new_banana * broi << endl;
        }
        else if (Fruit == "apple") {
            cout << new_apple * broi << endl;
        }
        else if (Fruit == "orange") {
            cout << new_orange * broi << endl;
        }
        else if (Fruit == "grapefruit") {
            cout << new_grapefruit * broi << endl;
        }
        else if (Fruit == "kiwi") {
            cout << new_kiwi * broi << endl;
        }
        else if (Fruit == "pineapple") {
            cout << new_pineapple * broi << endl;
        }
        else if (Fruit == "grapes") {
            cout << new_grapes * broi << endl;
        }
        else {
            cout << "error" << endl;
        }
    }
    else {
        cout << "error" << endl;
    }

}
