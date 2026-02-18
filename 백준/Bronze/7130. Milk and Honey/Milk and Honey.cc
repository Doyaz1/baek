#include <iostream>

using namespace std;

int main() {

	int M, H;

	int n;
	
	cin >> M >> H;
	cin >> n;

	int total = 0;

	for (int i = 0; i < n; i++) {
		int C, B;
		cin >> C >> B;

		int cow_v = C * M;
		int bee_v = B * H;

		total += max(cow_v, bee_v);

	}
	cout << total << endl;

	return 0;
}