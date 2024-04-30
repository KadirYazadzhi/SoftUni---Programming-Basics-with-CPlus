#include <iostream>
#include <string>

using namespace std;
int main()
{
    const double nagrada = 1250.50;
    string actor;
    getline(cin, actor);

    double points = 0.00;
    int n;
    cin >> points >> n;

    for (int i = 0; i < n && points <= nagrada; i++)
    {
        string jury;
        getline(cin.ignore(), jury);

        double grade;
        cin >> grade;

        points += jury.length() * grade / 2;
    }
    cout.setf(ios::fixed);
    cout.precision(1);
    if (points > nagrada) {
        cout << "Congratulations, " << actor << " got a nominee for leading role with " << points << "!" << endl;
    }
    else {
        cout << "Sorry, " << actor << " you need " << nagrada - points << " more!" << endl;

    }
}
