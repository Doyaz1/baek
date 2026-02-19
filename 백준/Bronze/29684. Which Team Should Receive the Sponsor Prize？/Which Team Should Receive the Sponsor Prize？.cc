#include <iostream>
#include <cmath>

using namespace std;

int main() {

	while (true) {
		int n;
		cin >> n;

		if (n == 0) {
			break;
		}

		int t[100];
		int diff[100];

		for (int i = 0; i < n; i++) {
			cin >> t[i];

			diff[i] = abs(t[i] - 2023);

		}

		int minIndex = 0;

		for (int i = 1; i < n; i++) {
			if (diff[i] < diff[minIndex]) {
				minIndex = i;
			}
		}

		cout << minIndex + 1 << endl;
	}

	return 0;
}