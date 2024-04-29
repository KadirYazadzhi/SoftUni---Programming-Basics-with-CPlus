#include <iostream>
using namespace std;

int main() {
    string figureType;
    cin >> figureType;
    double area = 0.0;
    double pi = 3.14159265359;

    if (figureType == "square")
    {
        double a;
        cin >> a;
        area = a * a;
    }
    else if (figureType == "rectangle")
    {
        double a;
        double b;
        cin >> a;
        cin >> b;
        area = a * b;
    }
    else if (figureType == "circle")
    {
        double r;
        cin >> r;
        area = r * r * pi;
    }
    else if (figureType == "triangle")
    {
        double a;
        double h;
        cin >> a;
        cin >> h;
        area = (a * h) / 2;
    }

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << area << endl;

}
