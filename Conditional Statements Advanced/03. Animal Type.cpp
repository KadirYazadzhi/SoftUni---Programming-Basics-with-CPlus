#include <iostream>
#include <string>
using namespace std;

int main() {
    string mammal = "mammal";
    string reptile = "reptile";
    string unknown = "unknown";

    string animal;
    cin >> animal;

    if (animal == "dog") {
        cout << mammal << endl;
    }
    else if (animal == "crocodile" || animal == "tortoise" || animal == "snake") {
        cout << reptile << endl;
    }
    else {
        cout << unknown << endl;
    }
}
