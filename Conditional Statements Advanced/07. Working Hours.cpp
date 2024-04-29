#include <iostream>
#include <string>
using namespace std;

int main() {
    int chas;
    string den;
    cin >> chas >> den;

    if (chas >= 10 && chas <= 18) {
        if (den == "Monday") {
            cout << "open" << endl;
        }
        if (den == "Tuesday") {
            cout << "open" << endl;
        }
        if (den == "Wednesday") {
            cout << "open" << endl;
        }
        if (den == "Thursday") {
            cout << "open" << endl;
        }
        if (den == "Friday") {
            cout << "open" << endl;
        }
        if (den == "Saturday") {
            cout << "open" << endl;
        }
    }
    if (den == "Sunday") {
        cout << "closed" << endl;
    }
    if (chas < 10) {
        cout << "closed" << endl;
    }
    if (chas > 18) {
        cout << "closed" << endl;
    }
}
