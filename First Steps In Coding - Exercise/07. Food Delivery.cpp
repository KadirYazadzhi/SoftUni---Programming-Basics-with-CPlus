#include <iostream>

using namespace std;

int main() {
    const double Pileshko = 10.35;
    const double Riba = 12.40;
    const double Vegan = 8.15;
    const double dostavka = 2.50;
    const double desert = 0.2;

    double BroiPile = 0;
    double BroiRiba = 0;
    double BroiVegan = 0;

    double CenaPile = 0;
    double CenaRiba = 0;
    double CenaVegan = 0;
    double CenaDesert = 0;
    double ObshtaCena = 0;
    double ObshtaCenaSdostavka = 0;

    cin >> BroiPile;
    cin >> BroiRiba;
    cin >> BroiVegan;

    CenaPile = BroiPile * Pileshko;
    CenaRiba = BroiRiba * Riba;
    CenaVegan = BroiVegan * Vegan;

    ObshtaCena = CenaPile + CenaRiba + CenaVegan;
    CenaDesert = ObshtaCena * desert;

    ObshtaCenaSdostavka = ObshtaCena + CenaDesert + dostavka;

    cout << ObshtaCenaSdostavka << endl;


    return 0;
}
