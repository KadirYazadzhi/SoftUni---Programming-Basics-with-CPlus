#include <iostream>

using namespace std;

int main()
{
    for (int numberOne = 1; numberOne <= 10; numberOne++)
    {
        for (int numberTwo = 1; numberTwo <= 10; numberTwo++)
        {
            int number = numberOne * numberTwo;
            cout << numberOne << " * " << numberTwo << " = " << number << endl;
        }
    }
}
