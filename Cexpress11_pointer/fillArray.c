#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���� 3 array�� rand�� ä���
void array_fill(int *A,int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		A[i] = rand();
		printf("%d ", A[i]);
	}
}

void main() {
	int a[10] = { 0, };
	array_fill(&a, sizeof(a) / sizeof(a[0]));
}