#include <iostream>

int main() {
	int kg;
	
	std::cin >> kg;

	for (int i = kg / 5; i >= 0; i--) {
		int remain = kg - (5 * i);

		if (remain % 3 == 0) {
			int j = remain / 3;
			std::cout << i + j << std::endl;
			return 0;
		}
	}

	std::cout << -1 << std::endl;

	return 0;
}