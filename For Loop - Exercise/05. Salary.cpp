#include <iostream>

using namespace std;
int main()
{
    int n;
    int salary;
    cin >> n;
    cin >> salary;

    for (int i = 0; i < n && salary > 0; i++)
    {
        string browserTab;
        cin >> browserTab;

        if (browserTab == "Facebook") {
            salary -= 150;
        }
        else if (browserTab == "Instagram") {
            salary -= 100;
        }
        else if (browserTab == "Reddit") {
            salary -= 50;
        }
    }
    if(salary > 0) {
        cout << salary << endl;
    }
    else {
        cout << "You have lost your salary." << endl;
    }

}