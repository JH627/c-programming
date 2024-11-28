#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double solve(const int* arr, int len);

int main(void) {
	int arr[5];

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Standard Deviation = %.3lf", solve(arr, 5));
	return 0;
}

double solve(const int* arr, int len) {
	double mid = 0;
	double sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}

	mid = (double)(sum / 5);

	sum = 0;
	for (int i = 0; i < len; i++) {
		sum += pow(mid - arr[i], 2);
	}

	return sqrt((double)(sum / len));
}