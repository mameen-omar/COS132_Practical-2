//COS 132 Practical 2 2016.
//9 Programming task 5: Fraction program [15].
#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	cout << "This is a fraction calculator" << endl;
	cout << "**********************" << endl;
	double a, b, c, d;

	cout << "FIRST FRACTION" << endl;
	cout << "  Enter the numerator: ";
	cin >> a;
	cout << "  Enter the denominator: ";
	cin >> b;

	cout << "SECOND FRACTION" << endl;
	cout << "  Enter the numerator: " ;
	cin >> c;
	cout << "  Enter the denominator:";
	cin >> d;

	cout << a << "/" << b << " + " << c << "/" << d << " = " ;
	cout << showpoint << setprecision(2) << fixed;

	cout << (a/b) + (c/d) << endl;
	return 0;
}
