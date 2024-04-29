#include <iostream>

using namespace std;

int main()
{
    const double himikali = 5.80;
    const double markeri = 7.20;
    const double preparatLitur = 1.20;

    int broiHimikali = 0;
    int broiMarkeri = 0;
    int litriPreparat = 0;
    double otstupkaProcent = 0;
    double otstupka = 0;

    double chenaHimikali = 0;
    double chenaMarkeri = 0;
    double chenaPreparat = 0;
    double obsthaChena = 0;
    double obshtaChenaSotstupka = 0.0;

    cin >> broiHimikali;
    cin >> broiMarkeri;
    cin >> litriPreparat;
    cin >> otstupkaProcent;

    chenaHimikali = broiHimikali * himikali;
    chenaMarkeri = broiMarkeri * markeri;
    chenaPreparat = litriPreparat * preparatLitur;
    otstupka = otstupkaProcent / 100;

    obsthaChena = chenaHimikali + chenaMarkeri + chenaPreparat;
    obshtaChenaSotstupka = obsthaChena - (obsthaChena * otstupka);
    cout << obshtaChenaSotstupka << endl;



    return 0;
}
