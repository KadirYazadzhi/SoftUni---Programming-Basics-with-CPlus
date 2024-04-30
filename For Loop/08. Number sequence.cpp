#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 0) {
        return 1;
    }

    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int number;
        cin >> number;

        if (number < minNumber) {
            minNumber = number;
        }

        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    cout << "Max number: " << maxNumber << endl;
    cout << " Min number: " << minNumber << endl;

    return 0;
}