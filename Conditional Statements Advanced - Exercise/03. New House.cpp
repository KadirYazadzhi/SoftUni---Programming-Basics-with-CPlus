#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    const double Roses = 5.00;
    const double Dahlias = 3.80;
    const double Tulips = 2.80;
    const double Narcissus = 3.00;
    const double Gladiolus = 2.50;

    string vid;
    int broi;
    double bqdjet;
    double krainaCena;

    cin >> vid >> broi >> bqdjet;

    if (vid == "Roses") {
        krainaCena = broi * Roses;
        if (broi > 80) {
            krainaCena -= krainaCena * 0.1;
        }
    } else if (vid == "Dahlias") {
        krainaCena = broi * Dahlias;
        if (broi > 90) {
            krainaCena -= krainaCena * 0.15;
        }
    } else if (vid == "Tulips") {
        krainaCena = broi * Tulips;
        if (broi > 80) {
            krainaCena -= krainaCena * 0.15;
        }
    } else if (vid == "Narcissus") {
        krainaCena = broi * Narcissus;
        if (broi < 120) {
            krainaCena += krainaCena * 0.15;
        }
    } else if (vid == "Gladiolus") {
        krainaCena = broi * Gladiolus;
        if (broi < 80) {
            krainaCena += krainaCena * 0.20;
        }
    }

    if (krainaCena <= bqdjet) {
        cout << "Hey, you have a great garden with " << broi << " " << vid << " and " << fixed << setprecision(2) << (bqdjet - krainaCena) << " leva left." << endl;
    } else {
        cout << "Not enough money, you need " << fixed << setprecision(2) << (krainaCena - bqdjet) << " leva more." << endl;
    }

    return 0;
}
