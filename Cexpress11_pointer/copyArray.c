#include <stdio.h>
//¹®Á¦ 6 array copy
void array_copy(int *A,int *B, int size) {
	for (int i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

void array_print(int* Arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *Arr++);
	}
	printf("\n");
}

void main() {
	int a[10] = {1,2,3,0,0,0,0,0,0,0};
	int b[10];
	array_copy(&a,&b, 10);
	array_print(&a, 10);
	array_print(&b, 10);
}