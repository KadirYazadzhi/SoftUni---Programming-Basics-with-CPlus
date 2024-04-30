#include <iostream>
#include <string>

using namespace std;

int main() {
    string duma;
    getline(cin, duma);

    int sum = 0;

    for (int i = 0; i < duma.length(); i++)
    {
        char letter = duma[i];
        if (duma[i] == 'a') {
            sum++;
        }
        else if (duma[i] == 'e') {
            sum += 2;
        }
        else if (duma[i] == 'i') {
            sum += 3;
        }
        else if (duma[i] == 'o') {
            sum += 4;
        }
        else if (duma[i] == 'u') {
            sum += 5;
        }

    }
    cout << sum << endl;

}
