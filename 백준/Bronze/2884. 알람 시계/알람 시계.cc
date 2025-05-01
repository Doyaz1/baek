#include <iostream>

int main() {
	int h, m;

	std::cin >> h >> m;

	if (m - 45 < 0) {
		if (h == 0) {
			h = 23;
			m = 60 - (45 - m);
		}
		else {
			h = h - 1;
			m = 60 - (45 - m);
		}
	}
	else {
		m = m - 45;
	}

	std::cout << h << " " << m;

	return 0;
}