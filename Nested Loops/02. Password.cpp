#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    string password;

    cin >> username;
    cin >> password;

    string NewPassword;

    while (NewPassword != password)
    {
        cin >> NewPassword;
    }
    cout << "Welcome " << username << "!" << endl;
}