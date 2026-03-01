#include <iostream>

using namespace std;

int main() {
	
	int t;
	cin >> t;

	int a[100];
	int b[100];

	for (int i = 0; i < t; i++) {
		
		int n;

		cin >> n;

		int count = 0;

		for (int j = 0; j < n; j++) {
			cin >> a[j];
		}

		for (int j = 0; j < n; j++) {
			cin >> b[j];
            if (a[j] != b[j]) {
				count++;
			}
		}

		cout << count << endl;
	}


	return 0;
}