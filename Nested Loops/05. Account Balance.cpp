#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double total = 0.0;
    double balance = 0.0;

    string amount;

    while (true) {
        getline(cin, amount);

        if (amount == "NoMoreMoney") {
            break;
        }

        try {
            double currentAmount = stod(amount);

            if (currentAmount < 0) {
                cout << "Invalid operation!" << endl;
                cout << "Total: " << fixed << setprecision(2) << balance << endl;
                return 1;
            }

            cout << "Increase: " << fixed << setprecision(2) << currentAmount << endl;
            balance += currentAmount;
        }
        catch (const invalid_argument& e) {
            cout << "Invalid input! " << e.what() << endl;
            return 1;
        }
        catch (const out_of_range& e) {
            cout << "Number out of range! " << e.what() << endl;
            return 1;
        }
    }

    cout << "Total: " << fixed << setprecision(2) << balance << endl;

    return 0;
}