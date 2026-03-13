#include <iostream>

using namespace std;

int main() {
	
	int iAb; // 입력된 타수	

	cin >> iAb;

	int iTb = 0; // 토탈 베이스
	int count = 0;	// 실제 타수
	double dSlg = 0; // 장타율

	for (int i = 0; i < iAb; i++) {
		int iBa; // 진루(베이스)
		cin >> iBa;
		
		if (iBa != -1) {
			iTb += iBa;
			count++;
		}
	}

	dSlg = (double)iTb / count;

	cout << dSlg << endl;

	return 0;
}