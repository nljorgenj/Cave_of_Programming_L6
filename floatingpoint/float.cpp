#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int main() {


	float fValue = 123.456789;

	cout << sizeof(float) << endl;
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456789;
	cout << sizeof(double) << endl;
	cout << setprecision(20) << fixed << dValue << endl;

	long double ldValue = 123.456789876543210;
	cout << sizeof(ldValue) << endl;
	cout << setprecision(20) << fixed << ldValue << endl;

	return 0;
}

