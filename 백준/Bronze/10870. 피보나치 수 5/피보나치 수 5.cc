#include <iostream>

int main() {
	int n;

	std::cin >> n;

	int a = 0, b = 1, temp;

	if (n == 0) {
		std::cout << 0 << std::endl;
	}
	else {
		for (int i = 2; i <= n; i++) {
			temp = a + b;
			a = b;
			b = temp;
		}
		std::cout << b << std::endl;
	}
	return 0;


}