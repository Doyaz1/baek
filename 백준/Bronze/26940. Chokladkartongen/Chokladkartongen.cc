#include <iostream>

using namespace std;

int main() {
	
	int t;
	int iPrev;

	cin >> t;
	cin >> iPrev;

	int count = 0;

	for (int i = 1; i < t; i++) {
		int iCurr;

		cin >> iCurr;

		if (iPrev < iCurr) {
			count++;
		}

		iPrev = iCurr;

	}

	cout << count << endl;

	return 0;
}