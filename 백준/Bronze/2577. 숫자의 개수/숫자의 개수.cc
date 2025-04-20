#include <iostream>

int main() {
	int array[10] = {0};
	int a, b, c;

	std::cin >> a >> b >> c;

	int mul = a * b * c;

	while(mul > 0){
		array[mul % 10]++;
		mul /= 10;
	}

	for (int j : array) {
		std::cout << j << std::endl;
	}

	return 0;
}