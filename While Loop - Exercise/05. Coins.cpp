#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double amount;
    cin >> amount;

    int amountInStotinki = amount * 100;

    vector<int> coinValues = {200, 100, 50, 20, 10, 5, 2, 1};
    int counter = 0;

    for (int coin : coinValues)
    {
        counter += amountInStotinki / coin;
        amountInStotinki %= coin;
    }

    cout << counter << endl;

    return 0;
}
