#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string a, b;

	std::cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	if (a > b) {
		std::cout << a;
	}

	if (a < b) {
		std::cout << b;
	}
	
	return 0;
}