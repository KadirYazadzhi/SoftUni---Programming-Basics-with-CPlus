#include <iostream>
#include <string>

using namespace std;

int main() {
    string duma;
    getline(cin, duma);

    for ( int position = 0; position <= duma.length() -1; position++)
    {
        char currentSymbol = duma[position];
        cout << currentSymbol << endl;
    }

}
