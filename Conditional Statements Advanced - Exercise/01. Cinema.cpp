#include <iostream>
#include <string>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    const double Premiere = 12.00;
    const double Normal = 7.50;
    const double Discount = 5.00;

    string vid;
    int redove;
    int koloni;

    cin >> vid >> redove >> koloni;

    double cena;

    if (vid == "Premiere") {
        cena = (redove * koloni) * Premiere;
        cout << cena << " leva";
    }
    if (vid == "Normal") {
        cena = (redove * koloni) * Normal;
        cout << cena << " leva";
    }
    if (vid == "Discount") {
        cena = (redove * koloni) * Discount;
        cout << cena << " leva";
    }


}