#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	long long a, b;

	scanf("%lld %lld", &a, &b);

	double dAsq = pow(a, 2);
	double dBsq = pow(b, 2);
	double dC = sqrt(dAsq + dBsq);

	printf("%.10f", dC);


}