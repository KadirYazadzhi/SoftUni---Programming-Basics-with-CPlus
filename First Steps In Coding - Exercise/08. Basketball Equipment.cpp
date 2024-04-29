#include <iostream>

using namespace std;

int main() {
    int TaksaGodina = 0;

    cin >> TaksaGodina;

    double Kecove = 0;
    double Topka = 0;
    double Ekip = 0;
    double Aksesoari = 0;
    double Cena = 0;

    Kecove = TaksaGodina - (TaksaGodina * 0.4);
    Ekip = Kecove - (Kecove * 0.2);
    Topka = Ekip / 4;
    Aksesoari = Topka / 5;

    Cena = TaksaGodina + Kecove + Ekip + Topka + Aksesoari;

    cout << Cena << endl;


    return 0;
}
