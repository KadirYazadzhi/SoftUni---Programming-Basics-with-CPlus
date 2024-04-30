#include <iostream>
#include <string>

using namespace std;

int main() {
    int standardTicketCount = 0, studentTicketCount = 0, kidTicketCount = 0;

    string movie;
    getline(cin, movie);

    while (true) {
        if (movie == "Finish") {
            break;
        }

        int seats = 0, counter = 0;
        cin >> seats;

        string category;

        while (counter != seats) {
            cin >> category;
            if (category == "End") {
                break;
            }
            else if (category == "standard") {
                standardTicketCount++;
            }
            else if (category == "student")
            {
                studentTicketCount++;
            }
            else {
                kidTicketCount++;
            }

            counter++;
        }

        printf("%s - %.2f%% full.\n", movie.c_str(), 1.0 * counter / seats * 100);

        cin.ignore();
        getline(cin, movie);
    }

    int sumTickets = studentTicketCount + standardTicketCount + kidTicketCount;

    printf("Total tickets: %i\n", sumTickets);
    printf("%.2f%% student tickets.\n", 1.0 * studentTicketCount / sumTickets * 100);
    printf("%.2f%% standard tickets.\n", 1.0 * standardTicketCount / sumTickets * 100);
    printf("%.2f%% kids tickets.\n", 1.0 * kidTicketCount / sumTickets * 100);

    return 0;
}
