#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2) {
	int* temp = *dp1; // 여기서 *dp1 이 의미하는 것은 ptr1이다. 그렇다면 ptr1은? 무엇이냐면 num1의 주소 &num1을 의미하는 것이다!!
	*dp1 = *dp2;
	*dp2 = temp;
}

void main(void) {
	int num1 = 10, num2 = 20;
	int * ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2); // ptr1과 ptr2의 주소값을 전달!!!
	printf("*ptr1, *ptr2: %d, %d\n", *ptr1, *ptr2);
}