#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	long long a, b;

	cin >> a >> b;

	double dAsq = pow(a, 2);
	double dBsq = pow(b, 2);
	double dC = sqrt(dAsq + dBsq);

	cout << fixed << setprecision(10) << dC << endl;

}