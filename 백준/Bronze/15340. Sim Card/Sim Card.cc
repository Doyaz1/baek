#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int c, d;

	while (true) {
		cin >> c >> d;

		if (c == 0 && d == 0) {
			break;
		}

		int ParsTel = (c * 30) + (d * 40);
		int ParsCell = (c * 35) + (d * 30);
		int ParsPhone = (c * 40) + (d * 20);

		cout << min({ ParsTel, ParsCell, ParsPhone }) << "\n";
	}

	return 0;
}