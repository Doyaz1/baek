#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int iPla;
		cin >> iPla;

		int count = 0;

		for (int j = 0; j < iPla; j++) {
			int cx, cy, r;
			cin >> cx >> cy >> r;
			int iStart = (pow((x1 - cx), 2) + pow((y1 - cy), 2) < pow(r,2));
			int iEnd = (pow((x2 - cx), 2) + pow((y2 - cy), 2) < pow(r,2));

			if (iStart != iEnd) {
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}