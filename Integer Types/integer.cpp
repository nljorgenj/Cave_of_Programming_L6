#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {


	int value = 44444;
	cout << value << endl;

	cout << "Min int value: " << INT_MIN << endl;
	cout << "Max int value: " << INT_MAX << endl;

	int64_t lValue = 3242343244678678;
	cout << "int64_t value: " << lValue << endl;

	long long int test = 424243242423;
	cout << "long long int: " << test << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(test) << endl;

	return 0;
}

