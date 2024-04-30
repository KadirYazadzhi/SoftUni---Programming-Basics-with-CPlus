#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    double counter1 = 0;
    double counter2 = 0;
    double counter3 = 0;
    double counter4 = 0;
    double counter5 = 0;

    for (int i = 0; i < n; i++) {
        int currentNumber;
        cin >> currentNumber;

        if (currentNumber < 200) {
            counter1 += 1;
        }
        else if (currentNumber < 400) {
            counter2 += 1;
        }
        else if (currentNumber < 600) {
            counter3 += 1;
        }
        else if (currentNumber < 800) {
            counter4 += 1;
        }
        else {
            counter5 += 1;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << 100.00 * counter1 / n << "%" << endl;
    cout << 100.00 * counter2 / n << "%" << endl;
    cout << 100.00 * counter3 / n << "%" << endl;
    cout << 100.00 * counter4 / n << "%" << endl;
    cout << 100.00 * counter5 / n << "%" << endl;
}
