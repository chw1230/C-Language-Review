
#include <stdio.h>

int mainb() {
	int arr[3][9];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i + 2) * (j + 1);
		}
	}
	for (int i = 0; i < 3; i++) {
		printf("%d´Ü\n", i + 2);
		for (int j = 0; j < 9; j++) {
			printf("%d\n", arr[i][j]);
		}
		printf("\n");
	}
}