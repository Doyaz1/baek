#include <iostream>

int main() {
	int n;
	int sum = 1;

	std::cin >> n;

	for (int i = 1; i <= n; i++) {
		sum *= i;
	}

	std::cout << sum;

	return 0;
}