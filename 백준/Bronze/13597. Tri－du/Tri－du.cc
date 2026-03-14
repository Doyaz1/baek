#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int iFc, int iSc) {
	if (iFc > iSc) {
		return iFc;
	}
	else {
		return iSc;
	}
}

int main() {
	int iFc, iSc;

	scanf("%d %d", &iFc, &iSc);

	printf("%d", max(iFc, iSc));

	return 0;
}