#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;

	cin >> n;

	int score = 0;

	for (int i = 0; i < n; i++) {
		string s;

		cin >> s;

		for (char c : s) {
			if (c == 'A') {
				score += 4;
			}
			else if (c == 'K') {
				score += 3;
			}
			else if (c == 'Q') {
				score += 2;
			}
			else if (c == 'J') {
				score += 1;
			}
		}
	}
	cout << score;
	return 0;
}