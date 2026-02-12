#include <iostream>

using namespace std;

int main() {

	int t, n, d; // N : 우주선 수 , D : 탐사 지점까지 거리
	int v, f, c; // v : 우주선 최고속도, f : 연료량,  c : 시간당 연료 소비량

	cin >> t;

	for (int i = 0; i < t; i++) {
		int count = 0;

		cin >> n >> d;
		for (int j = 0; j < n; j++) {
			cin >> v >> f >> c;
			
			if (d * c <= f * v) {
				count++;
			}
		}
		cout << count << endl;
	}


	return 0;
}