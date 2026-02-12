#include <iostream>

using namespace std;

int main() {
	
	int c, n;

	cin >> c >> n;

	if (c < n) {
		cout << c + 1;
	}
	else if (c > n) {
		cout << 0;
	}
	else if (c == n) {
		cout << c;
	}

	return 0;
}