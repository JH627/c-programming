#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;

	printf("Please enter a number: ");
	scanf("%d", &n);

	int isPrime = 1;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			isPrime = 0;
			break;
		}
	}

	printf("%s", isPrime ? "It is a prime number." : "It is not a prime number.");
	return 0;
}