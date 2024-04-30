#include <iostream>

using namespace std;
int main()
{
    int age, toyPrice;
    double washingMachinePrice;

    cin >> age >> washingMachinePrice >> toyPrice;

    int savings = 0;
    int money = 10;

    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0) {
            savings += money -1;
            money += 10;
        }
        else {
            savings += toyPrice;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (savings >= washingMachinePrice) {
        cout << "Yes! " << savings - washingMachinePrice << endl;
    }else {
        cout << "No! " << washingMachinePrice - savings << endl;
    }
}