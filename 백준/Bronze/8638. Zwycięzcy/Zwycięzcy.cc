#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

	int n;

	cin >> n;

	int score[1000];

	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	int ms = score[0];

	for (int i = 1; i < n; i++) {
		if (score[i] > ms) {
			ms = score[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (score[i] == ms) {
			cout << char('A' + i);
		}
	}

	return 0;
}