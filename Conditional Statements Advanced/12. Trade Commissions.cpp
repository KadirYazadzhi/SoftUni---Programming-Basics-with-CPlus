#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string town;
    cin >> town;
    double sales;
    cin >> sales;
    double commission = 0.0;

    if (town == "Sofia") {
        if (sales >= 0 && sales <= 500) {
            commission = 0.05;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 500 && sales <= 1000) {
            commission = 0.07;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 1000 && sales <= 10000) {
            commission = 0.08;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 10000) {
            commission = 0.12;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else {
            cout << "error" << endl;
        }
    } else if (town == "Varna") {
        if (sales >= 0 && sales <= 500) {
            commission = 0.045;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 500 && sales <= 1000) {
            commission = 0.075;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 1000 && sales <= 10000) {
            commission = 0.10;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 10000) {
            commission = 0.13;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else {
            cout << "error" << endl;
        }
    } else if (town == "Plovdiv") {
        if (sales >= 0 && sales <= 500) {
            commission = 0.055;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 500 && sales <= 1000) {
            commission = 0.08;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 1000 && sales <= 10000) {
            commission = 0.12;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else if (sales > 10000) {
            commission = 0.145;
            cout << fixed << setprecision(2) << (sales * commission) << endl;
        } else {
            cout << "error" << endl;
        }
    } else {
        cout << "error" << endl;
    }

    return 0;
}

