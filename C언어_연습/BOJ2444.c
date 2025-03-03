#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - i - 1; k++) {
			printf(" ");
		}
		for (int j = 0; j <= i * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int t = 0; t < n - 1; t++) {
		for (int h = 0; h <= t; h++) {
			printf(" ");
		}
		for (int j = 1; j < (n-t-1) * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}