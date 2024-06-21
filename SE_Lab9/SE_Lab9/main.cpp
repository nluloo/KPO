#include <iostream>
#include "Varparm.h"

using namespace std;

int main() {
	cout << "ivaparm: " << endl;
	cout << Varparm::ivarparm(1,4) << endl;
	cout << Varparm::ivarparm(2, 3, 4) << endl;
	cout << Varparm::ivarparm(3, 2, 3, 4) << endl;
	cout << Varparm::ivarparm(7, 2, 3, 4, 5,6,7,8) << endl;

	cout << "\nsvaparm: " << endl;
	cout << Varparm::svarparm(1,6) << endl;
	cout << Varparm::svarparm(2, 6, 7) << endl;
	cout << Varparm::svarparm(3, 1, 2, 3) << endl;
	cout << Varparm::svarparm(7, 1, 2, 3, 4,5,6,7) << endl;

	cout << "\nfvaparm: " << endl;
	cout << Varparm::fvarparm(2.4, FLT_MAX) << endl;
	cout << Varparm::fvarparm(4.3, 2.3, FLT_MAX) << endl;
	cout << Varparm::fvarparm(4.3, 2.3, 1.4, FLT_MAX) << endl;
	cout << Varparm::fvarparm(1.1, 2.4, 10.3, 5.5,4.3, 2.3, 1.4, FLT_MAX) << endl;

	cout << "\ndvaparm: " << endl;
	cout << Varparm::dvarparm(2.3, DBL_MAX) << endl;
	cout << Varparm::dvarparm(2.3, 111.1, DBL_MAX) << endl;
	cout << Varparm::dvarparm(2.3, 111.1, 4.2, DBL_MAX) << endl;
	cout << Varparm::dvarparm(10.2, 4.3, 2.3, 5.6, 2.3, 111.1, 4.2, DBL_MAX) << endl;

	return 0;
}