#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < i; k++) {
			printf(" ");
		}
		for (int j = 1; j < (n-i) * 2; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}