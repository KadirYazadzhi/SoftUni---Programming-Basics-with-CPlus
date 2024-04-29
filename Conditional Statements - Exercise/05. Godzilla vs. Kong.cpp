#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    const double procent = 0.1;

    double bqdjet;
    int broi;
    double cena;
    double dekor;
    double obleklo;

    cin >> bqdjet;
    cin >> broi;
    cin >> cena;

    double Total;

    dekor = bqdjet * procent;
    obleklo = broi * cena;

    if (broi > 150) {
        obleklo = obleklo - (obleklo * procent);
    }

    Total = obleklo + dekor;

    double Sum;

    Sum = abs(Total - bqdjet);

    if (bqdjet >= Total) {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << Sum << " leva left." << endl;
    } else {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << Sum << " leva more." << endl;
    }

    return 0;
}
