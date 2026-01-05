#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	float A, B;
	cin >> A >> B;
	float sum = 0.0;
	sum = A * B * 1 / 2;
	cout << fixed;
	cout.precision(1);
	cout << sum;
	return 0;
}