#include <iostream>
#include <string>

using namespace std;

int main()
{
    int duljina = 0;
    int shirochina = 0;
    string stoinost;

    cin >> duljina;
    cin >> shirochina;

    int obshto = duljina * shirochina;
    int Total = 0;

    while(true)
    {
        cin >> stoinost;
        if(stoinost == "STOP")
        {
            cout << obshto << " pieces are left." << endl;
            break;
        }

        int parcheta = stoi(stoinost);
        obshto -= parcheta;
        Total = obshto;

        if(obshto <= 0)
        {
            cout << "No more cake left! You need " << abs(Total) << " pieces more." << endl;
            break;
        }
    }

    return 0;
}