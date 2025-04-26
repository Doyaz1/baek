#include <iostream>

int main() {
	int t, h, w, n;
	int room;
	std::cin >> t;

	for (int i = 0; i < t; i++) {
		std::cin >> h >> w >> n;

		if (n % h == 0) {
			room = h * 100 + (n / h);
		}
		else {
			room = (n % h) * 100 + (n / h) + 1;
		}
		std::cout << room << std::endl;
	}

	return 0;
}
