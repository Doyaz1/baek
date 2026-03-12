#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int t;
	int iPrev;

	scanf("%d", &t);
	scanf("%d", &iPrev);

	int count;
	count = 0;

	for (int i = 1; i < t; i++) {
		int iCurr;

		scanf("%d", &iCurr);

		if (iPrev < iCurr) {
			count++;
		}

		iPrev = iCurr;
	}

	printf("%d", count);

	return 0;
}	