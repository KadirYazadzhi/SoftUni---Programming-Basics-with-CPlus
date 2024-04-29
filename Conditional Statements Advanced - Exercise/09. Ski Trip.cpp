#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    const double room = 18.00;
    const double apartment = 25.00;
    const double prezidentApartment = 35.00;

    int dni = 0;
    string vid;
    string ocenka;

    double krainaCena = 0.00;
    cin >> dni;
    cin.ignore();
    getline(cin, vid);
    getline(cin, ocenka);

    if (vid == "room for one person") {
        krainaCena = (dni - 1) * room;
    }

    else if (vid == "apartment") {
        krainaCena = (dni - 1) * apartment;
        if (dni < 10) {
            krainaCena = krainaCena * 0.7;
        }
        else if (dni < 15) {
            krainaCena = krainaCena * 0.65;
        }
        else {
            krainaCena = krainaCena * 0.5;
        }
    }

    else if (vid == "president apartment") {
        krainaCena = (dni - 1) * prezidentApartment;
        if (dni < 10) {
            krainaCena = krainaCena * 0.9;
        }
        else if (dni < 15) {
            krainaCena = krainaCena * 0.85;
        }
        else {
            krainaCena = krainaCena * 0.80;
        }
    }

    if (ocenka == "positive") {
        krainaCena = krainaCena * 1.25;
        cout << krainaCena << endl;
    }

    else if (ocenka == "negative") {
        krainaCena = krainaCena * 0.9;
        cout << krainaCena << endl;
    }

}
