#include <stdio.h>
//¹®Á¦ 8  array sum
void array_sum(int* A, int Sum,int size) {
	for (int i = 0; i < size; i++) {
		Sum += A[i];
	}
	printf("%d", Sum);
}

void main() {
	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int sum=0;
	printf("A[] = ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	array_sum(&a,sum, 10);
}