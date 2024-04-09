#include <iostream>

using namespace std;

int defaultparm(int a, int b, int c, int d, int e, int f = 10, int g = 50)
{
	return (a + b + c + d + e + f + g) / 7;
}


int main() {
	cout << defaultparm(1, 2, 3,4,5) << endl;
	cout << defaultparm(1, 2, 3,4,5,6,7) << endl;
	return 0;
}



