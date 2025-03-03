#include <stdio.h>

void main(void) {
	// ���� 1
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	printf("����1 / ");

	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;
		printf("%d ", arr[i]);
	}
	printf("\n");

	// ���� 2
	int arr2[5] = { 1,2,3,4,5 };
	int * ptr2 = arr2;
	printf("����2 / ");

	for (int i = 0; i < 5; i++) {
		*(ptr2 + i) += 2;
		printf("%d ", *(ptr2 + i));
	}
	printf("\n");

	// ���� 3
	int arr3[5] = { 1,2,3,4,5 };
	int* ptr3 = &arr3[4];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *ptr3;
		ptr3--;
	}
	printf("����3 / sum : %d\n", sum);

	// ���� 4
	int arr4[6] = { 1,2,3,4,5,6 };
	int* ptrF = arr4;
	int* ptrB = &arr4[5];
	int tmp = 0;
	printf("����4 / ");

	for (int i = 0; i < 3; i++) {
		tmp = *ptrF;
		*ptrF = *ptrB;
		*ptrB = tmp;
		ptrF++;
		ptrB--;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr4[i]);
	}
}