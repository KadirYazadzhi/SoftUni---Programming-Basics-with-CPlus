#include <iostream>
#include <string>
using namespace std;

int main() {
    double godini;
    string pol;

    cin >> godini >> pol;

    if (godini >= 16 && pol == "m") {
        cout << "Mr." << endl;
    }
    if (godini < 16 && pol == "m") {
        cout << "Master" << endl;
    }
    if (godini >= 16 && pol == "f") {
        cout << "Ms." << endl;
    }
    if (godini < 16 && pol == "f") {
        cout << "Miss" << endl;
    }
}