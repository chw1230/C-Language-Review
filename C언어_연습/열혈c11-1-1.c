#include <stdio.h>

void main(void) {
	int arr[5];
	
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	int sum = 0;
	
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("max = %d\n", max);
	printf("min = %d\n", min);
	printf("sum = %d", sum);
}