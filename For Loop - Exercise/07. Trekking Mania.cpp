#include <iostream>

using namespace std;
int main()
{
    int n;
    cin  >> n;

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    for (int i = 0; i < n; i++)
    {
        int climbers;
        cin >> climbers;

        if (climbers <= 5) {
            counter1 += climbers;
        }
        else if (climbers <= 12) {
            counter2 += climbers;
        }
        else if (climbers <= 25) {
            counter3 += climbers;
        }
        else if (climbers <= 40) {
            counter4 += climbers;
        }
        else {
            counter5 += climbers;
        }
    }
    int total = counter1 + counter2 + counter3 + counter4 + counter5;
    double procent1 = (100.00 * counter1) / total;
    double procent2 = (100.00 * counter2) / total;
    double procent3 = (100.00 * counter3) / total;
    double procent4 = (100.00 * counter4) / total;
    double procent5 = (100.00 * counter5) / total;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << procent1 << "%" << endl;
    cout << procent2 << "%" << endl;
    cout << procent3 << "%" << endl;
    cout << procent4 << "%" << endl;
    cout << procent5 << "%" << endl;
}
