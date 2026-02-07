#include <iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		int sum = 0;

		for (int j = 1; j <= b; j++) {
			sum += j + 1;
		}

		cout << a << " " << sum << endl;
	}
	return 0;
}