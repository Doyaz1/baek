#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	int x1, y1, r1;
	int x2, y2, r2;
	double dDist = 0;
	int intersectionCnt = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		dDist = sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
		
		if (dDist == 0 && r1 == r2) {
			intersectionCnt = -1;
		}
		else if (abs(r1 - r2) < dDist && dDist < r1 + r2)  {	// 교점이 2개인 경우
			intersectionCnt = 2;
		}
		else if (dDist == (r1 + r2)) {	
			intersectionCnt = 1;	// 교점이 1개인 경우 (외접)
		}
		else if (dDist == abs(r1 - r2)) {	
			intersectionCnt = 1;	// 교점이 1개인 경우 (내접)
		}
		else if (dDist > (r1 + r2) || dDist < abs(r1 - r2)){
			intersectionCnt = 0;	// 교점이 0개인 경우 (만나지 않음)
		}
		cout << intersectionCnt << endl;
	}

	return 0;
}