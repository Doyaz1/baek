#include <iostream>

int main() {
	int x;
	int n, a, b;
	int sum = 0;

	std::cin >> x;
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		sum += a * b;
	}
	if (x == sum) {
		std::cout << "Yes";
	}
	else {
		std::cout << "No";
	}
	return 0;
}