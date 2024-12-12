#include <iostream>

using namespace std;

int main(){
	int number1;
	int number2;

	cin >> number1;
	cin >> number2;

	for(int number = number1; number <= number2; number++) {
		int units = number % 10;
		int tens = (number / 10) % 10;
		int hundreds = (number / 100) % 10;
		int thousands = (number / 1000) % 10;
		int tenThousands = (number / 10000) % 10;
		int hundredThousands = number / 100000;

		int sumEvenPositions = units + hundreds + tenThousands;
		int sumOddPositions = tens + thousands + hundredThousands;

		if(sumEvenPositions == sumOddPositions) {
			cout << number << " ";
		}
	}
}
