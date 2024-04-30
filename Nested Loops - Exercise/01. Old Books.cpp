#include <iostream>
#include <string>

using namespace std;

int main() {
    string specialBookName;
    getline(cin, specialBookName);

    int bookCount = 0;
    string currentBook;

    while (true) {
        getline(cin, currentBook);

        if (currentBook == "No More Books") {
            cout << "The book you search is not here!" << endl;
            cout << "You checked " << bookCount << " books." << endl;
            break;
        } else if (specialBookName == currentBook) {
            cout << "You checked " << bookCount << " books and found it." << endl;
            break;
        }

        bookCount++;
    }

    return 0;
}