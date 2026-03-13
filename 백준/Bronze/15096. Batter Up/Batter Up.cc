#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int iAb; // 입력된 타수

	scanf("%d", &iAb);

	int iTb;	// 토탈 베이스
	int iCount;	// 실제 타수
	double dSlg;	// 장타율
	iTb = 0;
	iCount = 0;
	dSlg = 0;

	for (int i = 0; i < iAb; i++) {
		int iBa;
		scanf("%d", &iBa);

		if (iBa != -1) {
			iTb += iBa;
			iCount++;
		}
	}

	dSlg = (double)iTb / iCount;

	printf("%lf \n", dSlg);

	return 0;
}	