#include <iostream>
#include <string>

using namespace std;

int main() {
    double gradusi;
    string vreme;

    cin >> gradusi >> vreme;

    if (vreme == "Morning") {
        if (gradusi >= 10 && gradusi <= 18) {
            cout << "It's " << gradusi << " degrees, get your Sweatshirt and Sneakers.";
        }
        if (gradusi > 18 && gradusi <= 24) {
            cout << "It's " << gradusi << " degrees, get your Shirt and Moccasins.";
        }
        if (gradusi >= 25) {
            cout << "It's " << gradusi << " degrees, get your T-Shirt and Sandals.";
        }
    }

    if (vreme == "Afternoon") {
        if (gradusi >= 10 && gradusi <= 18) {
            cout << "It's " << gradusi << " degrees, get your Shirt and Moccasins.";
        }
        if (gradusi > 18 && gradusi <= 24) {
            cout << "It's " << gradusi << " degrees, get your T-Shirt and Sandals.";
        }
        if (gradusi >= 25) {
            cout << "It's " << gradusi << " degrees, get your Swim Suit and Barefoot.";
        }
    }

    if (vreme == "Evening") {
        if (gradusi >= 10 && gradusi <= 18) {
            cout << "It's " << gradusi << " degrees, get your Shirt and Moccasins.";
        }
        if (gradusi > 18 && gradusi <= 24) {
            cout << "It's " << gradusi << " degrees, get your Shirt and Moccasins.";
        }
        if (gradusi >= 25) {
            cout << "It's " << gradusi << " degrees, get your Shirt and Moccasins.";
        }
    }
}