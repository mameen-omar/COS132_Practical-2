#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	const double DOLLAR = 0.05917;
	const double EURO = 0.05681;
	double rand;
	double equivalentD;
	double equivalentE;

	cout << "Enter Rand amount: ";
	cin >> rand;

			// show only two decimals
		cout << setprecision (2) << fixed;

		// Dollar output
		cout << rand << " Rands (s) = ";
		equivalentD = (rand * DOLLAR);
		cout << fixed << equivalentD << " Dollar(s)\n";

		// Euro output
		cout << rand << " Rands (s) = ";
		equivalentE = (rand * EURO);
		cout << fixed << equivalentE << " Euro(s)\n";

	return 0;
	}
