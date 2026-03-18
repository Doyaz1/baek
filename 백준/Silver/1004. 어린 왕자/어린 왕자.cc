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
			int iStart = sqrt(pow((x1 - cx), 2) + pow((y1 - cy), 2)) < r;
			int iEnd = sqrt(pow((x2 - cx), 2) + pow((y2 - cy), 2)) < r;
			/* 점과 중심 사이의 거리 개념
			
			*/
			if (iStart != iEnd) {
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}