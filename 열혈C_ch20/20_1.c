#include <stdio.h>
//배열의 회전
int main_a() {
	int arr[4][4];
	int row = sizeof(arr[0]) / sizeof(int);
	//1 생성+출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = i*row+j+ 1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("90'회전\n");
	//2 생성
	for (int i = 0; i < row; i++) {
		for (int j=row-1;j>-1;j--){
			arr[i][j] = i + 1 + row * (row-1 - j);
		}
	}//출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("90'회전\n");
	//3 생성
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = (row-i) * row - j;
		}
	}//출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("90'회전\n");
	//4 생성
	for (int i = row - 1; i >-1; i--) {
		for (int j = 0;j<row; j++) {
			arr[i][j] = row * j + row - i;
		}
	}// 출력
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}