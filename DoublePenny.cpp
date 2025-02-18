#include <iostream>
#include <iomanip> // input output manipulation , for setw, fixed, precision. its mandatory
#include <locale>
using namespace std;

int main() {

	locale loc("en_US.UTF-8");
	cout.imbue(loc);

	double money = .01;
	// other variables?
	// counter
	cout << fixed << setprecision(2); //fixed, non scientific notation, 2 decimals
	// set up loop to loop x amount of times
	// to show money doubling every day for 30 days
	// display day# and doubling of money for the day
	cout << "Day 0" << " Value $" << money << endl;
	for (int day = 0; day < 30; day++) {

		money *= 2;
		cout << "Day " << day + 1 << " Value $" << money << endl;
	}
}