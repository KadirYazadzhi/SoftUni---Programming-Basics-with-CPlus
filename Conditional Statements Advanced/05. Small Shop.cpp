#include <iostream>
#include <string>

using namespace std;

int main() {
    double coffee = 0.50;
    double water = 0.80;
    double beer = 1.20;
    double sweets = 1.45;
    double peanuts = 1.60;

    string product;
    string grad;
    double broi;

    cin >> product >> grad >> broi;

    if (product == "coffee" && grad == "Sofia") {
        cout << coffee * broi << endl;
    }
    if (product == "water" && grad == "Sofia") {
        cout << water * broi << endl;
    }
    if (product == "beer" && grad == "Sofia") {
        cout << beer * broi << endl;
    }
    if (product == "sweets" && grad == "Sofia") {
        cout << sweets * broi << endl;
    }
    if (product == "peanuts" && grad == "Sofia") {
        cout << peanuts * broi << endl;
    }


    if (product == "coffee" && grad == "Plovdiv") {
        cout << (coffee - 0.10) * broi << endl;
    }
    if (product == "water" && grad == "Plovdiv") {
        cout << (water - 0.10) * broi << endl;
    }
    if (product == "beer" && grad == "Plovdiv") {
        cout << (beer - 0.05) * broi << endl;
    }
    if (product == "sweets" && grad == "Plovdiv") {
        cout << (sweets - 0.15) * broi << endl;
    }
    if (product == "peanuts" && grad == "Plovdiv") {
        cout << (peanuts - 0.10) * broi << endl;
    }




    if (product == "coffee" && grad == "Varna") {
        cout << (coffee - 0.05) * broi << endl;
    }
    if (product == "water" && grad == "Varna") {
        cout << (water - 0.10) * broi << endl;
    }
    if (product == "beer" && grad == "Varna") {
        cout << (beer - 0.10) * broi << endl;
    }
    if (product == "sweets" && grad == "Varna") {
        cout << (sweets - 0.10) * broi << endl;
    }
    if (product == "peanuts" && grad == "Varna") {
        cout << (peanuts - 0.05) * broi << endl;
    }
}
