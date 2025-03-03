#include <stdio.h>

void main(void) {
	//문제16-1-1
	int arr[3][9];
	for (int i = 0; i < 3; i++) {
		printf("%d단: ", i + 2);
		for (int j = 0; j < 9; j++) {
			arr[i][j] = (i+2) * (j+1);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//문제16-1-2
	int A[][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int B[4][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			B[j][i] = A[i][j];
		}
	}
	printf("배열 B\n");
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 2; i++) {
			printf("%d ", B[j][i]);
		}
		printf("\n");
	}

	//문제16-1-3
	printf("\n학생 성적 입력\n");
	int grades[5][5] = { 0, };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &grades[i][j]);
			grades[i][4] += grades[i][j];
			grades[4][i] += grades[i][j];
			grades[4][4] += grades[i][j];
		}
	}
	printf("\n학생 성적 출력\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", grades[i][j]);
		}
		printf("\n");
	}
}