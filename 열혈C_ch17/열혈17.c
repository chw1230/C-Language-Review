#include <stdio.h>
int MaxAndMin(int *array, int len, int** MaxPtr, int** MinPtr) {
	int set = *array;
	
	for (int i = 0; i < len; i++) {
		if (array[i] > set) {
			*MaxPtr = &array[i];
		}
		else {
			*MinPtr = &array[i];
		}
	}
 }

int main() {
	int* maxPtr;
	int* minPtr;
	int arr[5];
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
			scanf_s("%d", &arr[i]);
	}
	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("max : %d", *maxPtr);
	printf("min : %d", *minPtr);
}
