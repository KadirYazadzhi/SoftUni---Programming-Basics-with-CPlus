#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
  
	for (int thousands = 1; thousands <= 9; thousands++) {
		for (int hundreds = 1; hundreds <= 9; hundreds++) {
			for (int tens = 1; tens <= 9; tens++)	{
				for (int units = 1; units <= 9; units++) {

					if (n % thousands == 0 && n % hundreds == 0 && n % tens == 0 && n % units == 0) {
						cout << thousands << hundreds << tens << units << " ";
					}

				}
			}

		}
	}
}
