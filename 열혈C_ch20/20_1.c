#include <stdio.h>
//�迭�� ȸ��
int main_a() {
	int arr[4][4];
	int row = sizeof(arr[0]) / sizeof(int);
	//1 ����+���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = i*row+j+ 1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("90'ȸ��\n");
	//2 ����
	for (int i = 0; i < row; i++) {
		for (int j=row-1;j>-1;j--){
			arr[i][j] = i + 1 + row * (row-1 - j);
		}
	}//���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("90'ȸ��\n");
	//3 ����
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			arr[i][j] = (row-i) * row - j;
		}
	}//���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("90'ȸ��\n");
	//4 ����
	for (int i = row - 1; i >-1; i--) {
		for (int j = 0;j<row; j++) {
			arr[i][j] = row * j + row - i;
		}
	}// ���
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}