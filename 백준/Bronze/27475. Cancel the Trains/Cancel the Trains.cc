#include <iostream>

using namespace std;

int main() {

	int t;
	int under[100];
	int left[100];

	cin >> t;


	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> under[j];
		}

		for (int k = 0; k < m; k++) {
			cin >> left[k];

		}

		int count = 0;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (under[j] == left[k]) {
					count++;
				}
			}
		}
		cout << count << endl;
	}


	

	return 0;
}