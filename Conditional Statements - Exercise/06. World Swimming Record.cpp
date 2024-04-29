#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    double rekordSekundi = 0.00;
    double razstoqnieMetri = 0.00;
    double vremeSekundiZaMetur = 0.00;

    cin >> rekordSekundi >> razstoqnieMetri >> vremeSekundiZaMetur;

    double vremePotrebitel = razstoqnieMetri * vremeSekundiZaMetur;

    int zabelejka = static_cast<int>(floor(razstoqnieMetri / 15));
    double dopulnitelnoVreme = zabelejka * 12.5;

    vremePotrebitel += dopulnitelnoVreme;

    if (vremePotrebitel < rekordSekundi) {
        cout << "Yes, he succeeded! The new world record is " << vremePotrebitel << " seconds." << endl;
    } else {
        double nedostigashtiSekundi = vremePotrebitel - rekordSekundi;
        cout << "No, he failed! He was " << nedostigashtiSekundi << " seconds slower." << endl;
    }

    return 0;
}

