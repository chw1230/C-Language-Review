#include <stdio.h>

void main(void) {
	int num1 = 30, num2 = 30;
	int* ptr1 = &num1, * ptr2 = &num2;
	printf("�� -> num1 : %d\tnum2 : %d\n", *ptr1, *ptr2);
	(*ptr1) += 10;
	(*ptr2) -= 10;
	// �� ���� �ٲٱ�
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("�� -> num1 : %d\tnum2 : %d", *ptr1,*ptr2);
}