#include <iostream>
#include <string>

using namespace std;

int main()
{
    int shirochina = 0;
    int duljina = 0;
    int visochina = 0;

    string kashoni;

    cin >> shirochina;
    cin >> duljina;
    cin >> visochina;

    int obshto = shirochina * duljina * visochina;

    while (true)
    {
        cin >> kashoni;
        if (kashoni == "Done")
        {
            cout << obshto << " Cubic meters left." << endl;
            break;
        }

        int broiKashoni = stoi(kashoni);
        obshto -= broiKashoni;

        if (obshto <= 0)
        {
            cout << "No more free space! You need " << abs(obshto) << " Cubic meters more." << endl;
            break;
        }
    }
    return 0;
}
