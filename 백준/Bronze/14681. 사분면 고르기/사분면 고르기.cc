#include <iostream>

int main() {
	int a = 0;
	int b = 0;

	std::cin >> a;
	std::cin >> b;

	if (a > 0 && b > 0) {
		std::cout << 1;
	}
	else if (a > 0 && b < 0) {
		std::cout << 4;
	}
	else if (a < 0 && b > 0) {
		std::cout << 2;
	}
	else {
		std::cout << 3;
	}
	return 0;
}