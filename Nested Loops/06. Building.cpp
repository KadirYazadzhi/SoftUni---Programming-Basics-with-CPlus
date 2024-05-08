#include <iostream>

using namespace std;

int main()
{
    int floors;
    int rooms;

    cin >> floors;
    cin >> rooms;

    for(int floor = floors; floor >= 1; floor--)
    {
        for(int room = 0; room < rooms; room++)
        {
            if (floor == floors)
            {
                cout << "L" << floor << room << " ";
            }

            else if(floor % 2 == 0)
            {
                cout << "O" << floor << room << " ";
            }

            else if(floor % 2 != 0)
            {
                cout << "A" << floor << room << " ";
            }
        }

        cout << endl;
    }
}

