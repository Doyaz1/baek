#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

	double w, h;
	double r;
	
	const double PI = 3.14;

	cin >> w >> h >> r;

	cout << fixed;
	cout.precision(10);
	cout << w * h - ((PI * r * r) / 4);


	return 0;
}