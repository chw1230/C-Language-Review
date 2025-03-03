#include <stdio.h>
//¹®Á¦ 4 array print

void array_print(int* A, int size) {
	printf("A[] = { ");
	for (int i = 0; i < size; i++) {
		printf("%d ", *A++);
	}
	printf("}");
}

void main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	array_print(&a, sizeof(a) / sizeof(a[0]));
}