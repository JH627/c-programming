#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find(int num);

int main(void) {
	int n;
	printf("Please enter a number: ");
	scanf("%d", &n);

	find(n);

	return 0;
}

void find(int num) {
	if (num == 0) {
		return;
	}
	find(num / 2);
	printf("%d", num % 2);
}