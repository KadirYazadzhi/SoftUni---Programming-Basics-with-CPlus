#include<iostream>
using namespace std;
int main(){
	int number;
	cin >> number; int current = 1;
	bool isBigger = false;
  
	for (int rows = 1; rows <= number; rows++) {
		for (int cols = 1; cols <= rows ; cols++) {
			if (current>number) {
				break;
			}
      
			cout << current << " " ;
			current++;
		}
		if (isBigger) {
			break;
		}
    
		cout << endl;
	}
 
}
