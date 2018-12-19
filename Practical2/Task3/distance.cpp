#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//Variable Declaration
	const double SPEED = 120.00;
	double time;

	cout << "Enter the hours traveled: ";
	cin >> time;

	double distance = (SPEED * time);

	cout << "The drone traveled " << distance << " km in " << time <<" hours.\n";

	return 0;
}
