#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[30];

	printf("Input>");
	fgets(str, sizeof(str), stdin);
	for (int idx = 0; idx < 30; idx++) {
		if (str[idx] >= 'a' && str[idx] <= 'z') {
			str[idx] -= 32;
		}
		else if (str[idx] >= 'A' && str[idx] <= 'Z') {
			str[idx] += 32;
		}
	}

	printf("Output>%s", str);
	return 0;
}