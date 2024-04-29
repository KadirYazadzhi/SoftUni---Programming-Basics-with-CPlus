#include <iostream>

using namespace std;

int main() {
    const double nailonMetur = 1.50;
    const double BoqLitur = 14.50;
    const double Razreditel = 5.00;
    const double torbichki = 0.40;
    const double dopulnitelnoBoq = 0.1;
    const int dopulnitelnoNailon = 2;
    const double procentiRabota = 30;

    int BoqLitri = 0;
    int NailoniMetur = 0;
    int RazreditelLitri = 0;
    int chasove = 0;

    cin >> NailoniMetur;
    cin >> BoqLitri;
    cin >> RazreditelLitri;
    cin >> chasove;

    double chenaNailon = (NailoniMetur + dopulnitelnoNailon) * nailonMetur;
    double chenaBoq = (BoqLitri + (BoqLitri * dopulnitelnoBoq)) * BoqLitur;
    double chenaRazreditel = RazreditelLitri * Razreditel;


    double ObshtaChena = chenaBoq + chenaNailon + chenaRazreditel + torbichki;
    double Rabota = (ObshtaChena * procentiRabota / 100) * chasove;
    double ObshtaCenaSrabota = ObshtaChena + Rabota;

    cout << ObshtaCenaSrabota << endl;

    return 0;
}
