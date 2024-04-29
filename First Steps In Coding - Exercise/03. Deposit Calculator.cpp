#include <iostream>

using namespace std;

int main() {
    double depositedAmount, annualInterestRate;
    int depositPeriodInMonths;

    cin >> depositedAmount;
    cin >> depositPeriodInMonths;
    cin >> annualInterestRate;

    double monthlyInterestRate = annualInterestRate / 100 / 12;
    double finalAmount = depositedAmount + depositPeriodInMonths * ((depositedAmount * monthlyInterestRate));

    cout << finalAmount << endl;

    return 0;
}
