#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* arr1ptr = &arr1[0];
	int* arr2ptr = &arr2[0];

	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}

	printf("\n\nafter swap\n");

	for (int i = 0; i < 6; i++) {
		int temp = *(arr1ptr + i);
		*(arr1ptr + i) = *(arr2ptr + i);
		*(arr2ptr + i) = temp;
	}

	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\narr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}




	return 0;
}