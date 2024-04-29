#include<iostream>
#include <string>
using namespace std;

int main() {
    int number = 0;
    cin >> number;

    string den;

    switch (number) {

        case 1:
            den = "Monday";
            cout << den << endl; break;

        case 2:
            den = "Tuesday";
            cout << den << endl; break;

        case 3:
            den = "Wednesday";
            cout << den << endl; break;

        case 4:
            den = "Thursday";
            cout << den << endl; break;

        case 5:
            den = "Friday";
            cout << den << endl; break;

        case 6:
            den = "Saturday";
            cout << den << endl; break;

        case 7:
            den = "Sunday";
            cout << den << endl; break;

        default:

            cout << "Error" << endl; break;

    }

}
