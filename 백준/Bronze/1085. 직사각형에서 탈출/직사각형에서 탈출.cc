#include <iostream>
#include <algorithm>

int main() {
	int x, y, w, h;
	int min_dist;
	
	std::cin >> x >> y >> w >> h;

	min_dist = std::min({ x, y, (w - x), (h - y) });

	std::cout << min_dist << std::endl;

	return 0;
}