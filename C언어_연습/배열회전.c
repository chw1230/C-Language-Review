#include <stdio.h>

void rotate(int (*arr)[4]) {
	int arrB[4][4];
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			arrB[j - 1][4 - i] = arr[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			arr[i - 1][j - 1] = arrB[i - 1][j - 1];
			printf("%d ", arr[i - 1][j - 1]);
		}
		printf("\n");
	}
}

int main(void) {
	// ����1 : �迭�� ȸ��
	int arrA[4][4];

	// �ʱ�ȭ 
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			arrA[i - 1][j - 1] = 4 * (i - 1) + j;
			printf("%d ", arrA[i - 1][j - 1]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		printf("\n 90�� ȸ��!\n");
		rotate(arrA);
		printf("\n");
	}
}