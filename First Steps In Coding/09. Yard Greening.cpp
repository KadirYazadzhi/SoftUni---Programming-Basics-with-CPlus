#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double squareMeters;
    cin >> squareMeters;

    double pricePerSquareMeter = 7.61;
    double totalPrice = squareMeters * pricePerSquareMeter;
    double discount = 0.18 * totalPrice;
    double finalPrice = totalPrice - discount;

    cout << fixed << setprecision(2);
    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;
}
