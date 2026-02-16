#include <iostream>

using namespace std;

int main() {

	int t;

	int binus[100], a;

	cin >> t;

	int point = 0;
	
	for (int i = 0; i < t; i++) {
		cin >> binus[i];
	}

	for (int i = 0; i < t; i++) {
		int a;
		cin >> a;
		
		if (binus[i] > a) {
			point += 3;
		}
		else if (binus[i] == a) {
			point += 1;
		}
		else {
			point += 0;
		}
	}

	cout << point;

	return 0;
}