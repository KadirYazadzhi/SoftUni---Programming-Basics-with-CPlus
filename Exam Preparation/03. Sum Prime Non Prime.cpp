#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	cin >> input;

	int sumPrimeNumbers = 0;
	int sumNoPrimeNumbers = 0;

	while (input != "stop") {
		int number = stoi(input);

		if (number < 0) {
			cout << "Number is negative." << endl;
		}
		else {
			int count = 0;

			for (int i = 1; i <= number; i++){
				if (number % i == 0) {
					count++;
				}
			}

			if(count == 2) {
				sumPrimeNumbers += number;
			}
			else {
				sumNoPrimeNumbers += number;
			}
		}

		cin >> input;
	}

	cout << "Sum of all prime numbers is: " << sumPrimeNumbers << endl;
	cout << "Sum of all non prime numbers is: " << sumNoPrimeNumbers << endl;
}
