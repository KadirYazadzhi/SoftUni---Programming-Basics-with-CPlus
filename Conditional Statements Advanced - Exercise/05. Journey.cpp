#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    double bqdjet = 0.00;
    string sezon;
    cin >> bqdjet >> sezon;

    double cena = 0.00;

    if (bqdjet <= 100) {
        if (sezon == "summer") {
            cena = bqdjet * 0.3;
            cout << "Somewhere in Bulgaria" << endl;
            cout << "Camp - " << cena << endl;
        }
        else if (sezon == "winter") {
            cena = bqdjet * 0.7;
            cout << "Somewhere in Bulgaria" << endl;
            cout << "Hotel - " << cena << endl;
        }
    }
    else if (bqdjet <= 1000) {
        if (sezon == "summer") {
            cena = bqdjet * 0.4;
            cout << "Somewhere in Balkans" << endl;
            cout << "Camp - " << cena << endl;
        }
        else if (sezon == "winter") {
            cena = bqdjet * 0.8;
            cout << "Somewhere in Balkans" << endl;
            cout << "Hotel - " << cena << endl;
        }
    }
    else {
        cena = bqdjet * 0.9;
        cout << "Somewhere in Europe" << endl;
        cout << "Hotel - " << cena << endl;
    }
}