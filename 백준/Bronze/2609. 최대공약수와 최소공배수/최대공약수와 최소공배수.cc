#include <iostream>

int gcd(int n, int m) {
	int c = n % m;

	while (c != 0) {
		n = m;
		m = c;
		c = n % m;
	}
	return m;
}

int lcm(int n, int m) {
	return (n * m) / gcd(n, m);
}

int main() {
	int n1, m1;

	std::cin >> n1 >> m1;

	std::cout << gcd(n1, m1) << std::endl;
	std::cout << lcm(n1, m1) << std::endl;
}