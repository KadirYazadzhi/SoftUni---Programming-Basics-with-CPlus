#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string mesec;
    int broi;
    cin >> mesec >> broi;

    double cenaApartament;
    double cenaStudio;

    if (mesec == "May" || mesec == "October") {
        cenaApartament = 65;
        cenaStudio = 50;

        if (broi > 7 && broi < 13) {
            cenaStudio = cenaStudio * 0.95;
        }
        if (broi > 14) {
            cenaStudio = cenaStudio * 0.7;
            cenaApartament = cenaApartament * 0.9;
        }
    }
    else if (mesec == "June" || mesec == "September") {
        cenaApartament = 68.70;
        cenaStudio = 75.20;

        if (broi > 14) {
            cenaStudio = cenaStudio * 0.8;
            cenaApartament = cenaApartament * 0.9;
        }
    }
    else if (mesec == "July" || mesec == "August") {
        cenaApartament = 77.00;
        cenaStudio = 76.00;

        if (broi > 14) {
            cenaApartament = cenaApartament * 0.9;
        }
    }

    cenaApartament = cenaApartament * broi;
    cenaStudio = cenaStudio * broi;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << cenaApartament << " lv." << endl;
    cout << "Studio: " << cenaStudio << " lv." << endl;

}
