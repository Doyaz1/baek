#include <iostream>

int main() {
	int t, h, w, n;
	int floor;
	int room;
	std::cin >> t;

	while (t--) {
		std::cin >> h >> w >> n;

		floor = n % h;
		room = (n / h) + 1;

		if (floor == 0) {
			floor = h;
			room = n / h;
		}
		std::cout << floor * 100 + room << std::endl;
	}

	return 0;
}
