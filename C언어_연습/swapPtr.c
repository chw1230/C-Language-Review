#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2) {
	int* temp = *dp1; // ���⼭ *dp1 �� �ǹ��ϴ� ���� ptr1�̴�. �׷��ٸ� ptr1��? �����̳ĸ� num1�� �ּ� &num1�� �ǹ��ϴ� ���̴�!!
	*dp1 = *dp2;
	*dp2 = temp;
}

void main(void) {
	int num1 = 10, num2 = 20;
	int * ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2); // ptr1�� ptr2�� �ּҰ��� ����!!!
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);
}