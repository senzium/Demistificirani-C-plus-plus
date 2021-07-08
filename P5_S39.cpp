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
	// definiramo str3 koja se izračunava unutar grana:
	double str3;
	// ako je prva zadana stranica dulja, ...
	if (str1 > str2)
	{
		// ... onda računaj drugu katetu,
		str3 = sqrt(str1 * str1 - str2 * str2);
	}
	else
	{
		// ...a inače računaj hipotenuzu.
		str3 = sqrt(str1 * str1 + str2 * str2);
	}
	// ispiši rezultat:
	cout << "Stranica3 = " << str3 << endl;
	return 0;
}