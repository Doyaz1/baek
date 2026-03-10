#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int x, y, z;

	scanf("%d %d %d", &x, &y, &z);

	int mul = x * y;
	int sum = mul + z;

	printf("%d", sum);

	return 0;
}	