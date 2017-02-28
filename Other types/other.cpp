#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

using namespace std;

int main() {


	bool bValue = true;
	cout << bValue << endl;

	char cValue = 55;
	cout << cValue << endl;

	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';

	cout << wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;


	return 0;
}

