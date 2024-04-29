#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
    int N1;
    int N2;
    string simvol;

    cin >> N1 >> N2 >> simvol;

    if (N2 == 0) {
        cout << "Cannot divide " << N1 << " by zero" << endl;

    }
    else if (simvol == "*" || simvol == "+" || simvol == "-") {
        int rezultat;
        if (simvol == "*") {
            rezultat = N1 * N2;
        }
        else if (simvol == "+") {
            rezultat = N1 + N2;
        }
        else if (simvol == "-") {
            rezultat = N1 - N2;
        }
        if (rezultat % 2 == 0) {
            cout << N1 << " " << simvol << " " << N2 << " = " << rezultat << " - " << "even" << endl;
        }
        else {
            cout << N1 << " " << simvol << " " << N2 << " = " << rezultat << " - " << "odd" << endl;
        }
    }
    else if (simvol == "/" && N2 != 0) {
        double N1SP = N1 * 1.00;
        double N2SP = N2 * 1.00;
        double rezultat;
        rezultat = N1SP / N2SP;
        cout << N1 << " " << simvol << " " << N2 << " = " << fixed << setprecision(2) << rezultat << endl;
    }
    else if (simvol == "%") {
        int rezultat;
        rezultat = N1 % N2;
        cout << N1 << " " << simvol << " " << N2 << " = " << rezultat << endl;
    }

}
