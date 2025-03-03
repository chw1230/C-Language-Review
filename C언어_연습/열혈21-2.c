#include <stdio.h>

int num(char* ptr) {
	int sum = 0;
	for (int i = 0; i < sizeof(ptr); i++)
	{
		if ('1' <= ptr[i] && ptr[i] <= '9') {
			sum += atoi(ptr[i]);
		}
	}
	return sum;
}

int main(void) {
	// ¹®Á¦ 1
	char arr[100];
	fgets(arr, sizeof(arr), stdin);
	printf("%d",num(arr));
}