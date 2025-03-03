#include <stdio.h>

void main(void) {
	// 巩力 1
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	printf("巩力1 / ");

	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		ptr++;
		printf("%d ", arr[i]);
	}
	printf("\n");

	// 巩力 2
	int arr2[5] = { 1,2,3,4,5 };
	int * ptr2 = arr2;
	printf("巩力2 / ");

	for (int i = 0; i < 5; i++) {
		*(ptr2 + i) += 2;
		printf("%d ", *(ptr2 + i));
	}
	printf("\n");

	// 巩力 3
	int arr3[5] = { 1,2,3,4,5 };
	int* ptr3 = &arr3[4];
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += *ptr3;
		ptr3--;
	}
	printf("巩力3 / sum : %d\n", sum);

	// 巩力 4
	int arr4[6] = { 1,2,3,4,5,6 };
	int* ptrF = arr4;
	int* ptrB = &arr4[5];
	int tmp = 0;
	printf("巩力4 / ");

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