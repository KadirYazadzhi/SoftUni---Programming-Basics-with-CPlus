#include <iostream>

using namespace std;

int main() {
    double duljina = 0;
    double shirochina = 0;
    double visochina = 0;
    double procent = 0;

    cin >> duljina;
    cin >> shirochina;
    cin >> visochina;
    cin >> procent;

    double Obem = 0;
    double ObemLitri = 0;
    double Litri;

    Obem = duljina * shirochina * visochina;
    ObemLitri = Obem / 1000;

    double prostranstvo = procent / 100;
    Litri = ObemLitri * (1 - prostranstvo);

    cout << Litri << endl;




    return 0;
}
