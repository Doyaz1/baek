#include <iostream>

int main() {
	int h, m, c;
	int hour, minute;

	std::cin >> h >> m;
	std::cin >> c;

	if (m + c < 60) {
		hour = h;
		minute = m + c;
	}

	else {
		hour = (h + ((m + c) / 60)) % 24;
		minute = (m + c) % 60;
	}

	std::cout << hour << " " << minute;

	return 0;
}