#include <iostream>

using namespace std;

template<typename T, typename S>
auto max(T x, S y) {
	return (x > y ? x : y);
	}

int main() {

	auto b = max<>(2, 2.5);

	cout << b << endl;

	return 0;
}