#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    const double springPrice = 3000;
    const double summerAutumnPrice = 4200;
    const double winterPrice = 2600;

    int budget;
    string season;
    int fishermenCount;

    double totalPrice;

    cin >> budget >> season >> fishermenCount;

    if (season == "Spring") {
        if (fishermenCount <= 6) {
            totalPrice = springPrice - (springPrice * 0.10);
        }
        else if (fishermenCount <= 11) {
            totalPrice = springPrice - (springPrice * 0.15);
        }
        else {
            totalPrice = springPrice - (springPrice * 0.25);
        }
    }
    else if (season == "Summer" || season == "Autumn") {
        if (fishermenCount <= 6) {
            totalPrice = summerAutumnPrice - (summerAutumnPrice * 0.10);
        }
        else if (fishermenCount <= 11) {
            totalPrice = summerAutumnPrice - (summerAutumnPrice * 0.15);
        }
        else {
            totalPrice = summerAutumnPrice - (summerAutumnPrice * 0.25);
        }
    }
    else if (season == "Winter") {
        if (fishermenCount <= 6) {
            totalPrice = winterPrice - (winterPrice * 0.10);
        }
        else if (fishermenCount <= 11) {
            totalPrice = winterPrice - (winterPrice * 0.15);
        }
        else {
            totalPrice = winterPrice - (winterPrice * 0.25);
        }
    }
    else {
        cout << "error" << endl;
        return 1;
    }

    if (fishermenCount % 2 == 0 && season != "Autumn") {
        totalPrice -= totalPrice * 0.05;
    }

    if (totalPrice <= budget) {
        double remainingMoney = budget - totalPrice;
        cout << "Yes! You have " << fixed << setprecision(2) << remainingMoney << " leva left." << endl;
    }
    else {
        double neededMoney = totalPrice - budget;
        cout << "Not enough money! You need " << fixed << setprecision(2) << neededMoney << " leva." << endl;
    }

    return 0;
}
