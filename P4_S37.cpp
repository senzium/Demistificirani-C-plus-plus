#include <iostream>
#include <cmath>		// trebamo uključiti zbog funkcije sqrt
using namespace std;

int main()
{
	// učitajmo prvu stranicu:
	cout << "Stranica1 = ";
	double str1;
	cin >> str1;
	// učitajmo drugu stranicu:
	cout << "Stranica2 = ";
	double str2;
	cin >> str2;
	// izračunajmo i ispišimo hipotenuzu
	double str3 = sqrt(str1 * str1 + str2 * str2);
	cout << "Stranica3 = " << str3 << endl;
	return 0;
}