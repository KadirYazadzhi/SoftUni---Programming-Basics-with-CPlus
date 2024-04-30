#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int leftSum = 0;
    int rightSum = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        leftSum += num;
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        rightSum += num;
    }
    int dif = abs(leftSum - rightSum);

    if (dif == 0) {
        cout << "Yes, sum = " << leftSum;
    }
    else {
        cout << "No, diff = " << dif;
    }

    return 0;
}
