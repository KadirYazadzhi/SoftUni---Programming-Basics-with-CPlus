#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName;
    string lastName;
    string town;
    int age = 0;
    cin >> firstName >> lastName >> age >> town;
    cout << "You are " << firstName << " " << lastName << ", a " << age << "-years old person from " << town << ".";

}
