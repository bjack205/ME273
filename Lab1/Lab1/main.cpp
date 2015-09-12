//------------------------------------------------------------------------------------------------------------------------------
// File:	main.cpp
// By:		Brian Jackson
// Date:	September 10, 2015
// This program shows the difference between integer and floating-point division by taking the average of 4 numbers.
//-------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int casenum;
	int base = 4;
	//Welcome message
	cout << "***Welcome to our average number tester!***" << endl;
	while (true) {
		//Menu
		cout << "Select which case you want to test: \n\t"
			"[1] All Floats\n\t"
			"[2] Inputs as Ints\n\t"
			"[3] Same as [2] with float division\n\t"
			"[4] Exit\n\t"
			"Selection: ";
		cin >> casenum;

		//Exit
		if (casenum == 4) {
			return 0;
		}

		//Get numbers
		float m, w, x, y, z;
		cout << "Input 4 numbers: ";
		cin >> w >> x >> y >> z;

		//Change average calculation depending on case selected
		if (casenum == 1) {
			m = (w + x + y + z) / 4;
		}
		else if (casenum == 2) {
			m = (int(w) + int(x) + int(y) + int(z)) / 4;
		}
		else if (casenum == 3) {
			m = (int(w) + int(x) + int(y) + int(z)) / 4.0;
		}

		//Display answer
		cout << "\nYour answer is: " << m << endl;
	}
}