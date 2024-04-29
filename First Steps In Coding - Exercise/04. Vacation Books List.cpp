#include <iostream>

using namespace std;

int main() {
    int stranici = 0;
    int straniciNaChas = 0;
    int dni = 0;

    int chasoveObshto = 0;
    int chasoveNaDen = 0;

    cin >> stranici;
    cin >> straniciNaChas;
    cin >> dni;

    chasoveObshto = stranici / straniciNaChas;
    chasoveNaDen = chasoveObshto / dni;

    cout << chasoveNaDen << endl;
    return 0;
}
