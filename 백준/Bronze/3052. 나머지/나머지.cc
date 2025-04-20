#include <iostream>

int main() {
	int array[10] = {};
	int count = 10;

	for (int i = 0; i < 10; i++) {
		std::cin >> array[i];
		for (int j = 0; j < i; j++) {
			if (array[i] % 42 == array[j] % 42) {
				count--;
				break;
			}
		}
	}
	std::cout << count;
	return 0;
}