#include <stdio.h>
//¹®Á¦ 7 array add
void array_add(int* A, int* B, int*C,int size) {
	for (int i = 0; i < size; i++) {
		C[i] = B[i] + A[i];
	}
}

void array_print(int* Arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *Arr++);
	}
	printf("\n");
}

void main() {
	int a[10] = { 1,2,3,0,0,0,0,0,0,0 };
	int b[10] = { 0, };
	int c[10];
	array_add(&a, &b,&c,10);
	array_print(&a, 10);
	array_print(&b, 10);
	array_print(&c, 10);
}