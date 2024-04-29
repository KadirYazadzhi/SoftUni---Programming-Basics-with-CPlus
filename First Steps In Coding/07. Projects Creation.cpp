#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int HOURS_PER_PROJECT = 3;

    string architectName;
    int projectCount = 0;

    cin >> architectName >> projectCount;

    cout << "The architect " << architectName << " will need " << projectCount * HOURS_PER_PROJECT <<
         " hours to complete " << projectCount << " project/s.";


}
