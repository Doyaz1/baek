#include <iostream>

int max(int a, int b, int c) {
	return a > b ? (a > c) ? a : c : (b > c) ? b : c;
}

int main() {
	int a, b, c;
	int money = 0;

	std::cin >> a >> b >> c;

	if (a == b && b == c) {
		money = (10000 + (a * 1000));
	}

	else if (a == b || a == c) {
		money = 1000 + (a * 100);
	}
	else if (b == c) {
		money = 1000 + (b * 100);
	}

	else if (a != b && a != c) {
		money = max(a, b, c) * 100;
	}

	std::cout << money;

	return 0;
}