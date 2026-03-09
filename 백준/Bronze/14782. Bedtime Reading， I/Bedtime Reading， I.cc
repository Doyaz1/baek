#include <iostream>

using namespace std;

int main() {
	
	int Div;

	cin >> Div;

	int sum = 0;

	for (int i = 1; i <= Div; i++) {
		if ((Div % i) == 0) {
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}