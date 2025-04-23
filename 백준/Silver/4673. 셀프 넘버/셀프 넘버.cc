#include <iostream>

int d(int n) {
	int sum = n;

	while (n != 0) {
		sum += (n % 10);	// 첫 째 자리수
		n /= 10;
	}
	return sum;
}

int main() {
	bool check[10001] = { false, };
	for (int i = 1; i < 10001; i++) {
		int n = d(i);
		
		if (n < 10001) {
			check[n] = true;
		}
		if (!check[i]) {
			std::cout << i << "\n";
		}
	}
	return 0;
}