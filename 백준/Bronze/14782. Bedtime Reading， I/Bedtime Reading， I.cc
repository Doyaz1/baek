#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int Div;

	scanf("%d", &Div);
	
	int sum = 0;
	for (int i = 1; i <= Div; i++) {
		if ((Div % i) == 0) {
			sum += i;
		}
	}

	printf("%d", sum);

	return 0;
}	