#include <stdio.h>

int SquareByValue(int n) {
	return n * n;
}

void SquareByReference(int* p) {
	*p = *p * (*p);
}

void Swap3(int* p1, int* p2, int* p3) {
	int tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = *p3;
	*p3 = tmp;
}

void main(void) {
	// 巩力 1
	printf("巩力 1\n");
	int num;
	scanf("%d", &num);
	printf("Call-by-value : %d\n",SquareByValue(num));
	SquareByReference(&num);
	printf("Call-by-reference : %d", num);

	//巩力 2
	printf("\n巩力 2\n");
	int num1=1, num2=2, num3=3;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
}
