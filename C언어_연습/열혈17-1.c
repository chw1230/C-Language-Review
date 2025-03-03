#include <stdio.h>

void MaxAndMin(int *dptr,int ** maxdPtr,int **mindPtr,int size) {
	*maxdPtr = *mindPtr = &dptr[0];
	for (int i = 0; i < size; i++) {
		printf("%d ", dptr[i]);
		if (dptr[i] > **maxdPtr) {
			*maxdPtr = &dptr[i];
		}
		if (dptr[i] < **mindPtr) {
			*mindPtr = &dptr[i];
		}
	}
}

void main() {
	int* maxPtr;
	int* minPtr;
	int arr[5] = { 1,2,3,4,5 };

	MaxAndMin(arr,&maxPtr,&minPtr,sizeof(arr)/sizeof(int));
	printf("\nmax: %d\n", *maxPtr);
	printf("min: %d", *minPtr);
}