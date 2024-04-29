#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    double bqdjet;
    int broiVideokarti;
    int broiProcesori;
    int broiRAM;

    cin >> bqdjet >> broiVideokarti >> broiProcesori >> broiRAM;

    double cenaVideokarti;
    double cenaProcesiri;
    double cenaRAM;

    cenaVideokarti = 250.0 * broiVideokarti;
    cenaProcesiri = (cenaVideokarti * 0.35) * broiProcesori;
    cenaRAM = (cenaVideokarti * 0.1) * broiRAM;

    double krainaCena = cenaProcesiri + cenaVideokarti + cenaRAM;

    if (broiVideokarti > broiProcesori) {
        krainaCena = krainaCena - (krainaCena * 0.15);
    }

    if (krainaCena <= bqdjet) {
        double Sum = bqdjet - krainaCena;
        cout << "You have " << Sum << " leva left!";
    }
    else {
        double Sum = krainaCena - bqdjet;
        cout << "Not enough money! You need " << Sum << " leva more!";
    }


}
