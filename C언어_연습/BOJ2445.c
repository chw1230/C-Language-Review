#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		for (int k = 0; k < (n - i - 1) * 2; k++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 0; i < n*2; i++) {
		printf("*");
	}
	printf("\n");

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			printf("*");
		}
		for (int k = 0; k < (i+1) * 2; k++) {
			printf(" ");
		}
		for (int j = 0; j < n - i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}