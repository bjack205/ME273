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

int Convert(int count) {
	float tempF,tempC;
	cout << "Enter Temperature in F: ";
	cin >> tempF;
	tempC = (tempF - 32) * 5 / 9;
	cout << "Temperature in Celcuius: " << tempC << endl << endl;
	if (count) {
		Convert(--count);
	}
	return 0;
}

int main() {
	Convert(4);
	char input;
	cout << "Enter any value to exit ";
	cin >> input;
	return 0;
}
