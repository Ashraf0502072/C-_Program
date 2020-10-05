//============================================================================
// Name        : celcious_to_fahrenheit.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double fahr, cel;
	cout << "give the value of temperature in celcious: " << endl;
	cin >> cel;
	fahr = (9.0*cel/5.0)+32.0;

	cout << "the temperature in fahrenheit is : " << fahr << endl; // prints !!!Hello World!!!
	return 0;
}
