#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    int number;
    cin >> number;

    int SumNumber = INT_MIN;
    int Total = 0;
    while(true)
    {
        cin >> SumNumber;

        if(Total >= number)
        {
            cout << Total << endl;
            break;
        }
        else
        {
            Total += SumNumber;
        }
    }
}