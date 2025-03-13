#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int idx = 0;
	int len = 5;
	int* num = (int*)malloc(sizeof(int) * len);
	while (1) {
		printf("숫자입력(-1 종료): ");
		scanf_s("%d", &num[idx]);
		if (num[idx] == -1) {
			break;
		}

		if (len == idx + 1) {
			len += 3; 
			num = (int*)realloc(num, sizeof(int) * len);
		}
		idx++;
	}

	for (int i = 0; i < idx; i++)
	{
		printf("%d ", num[i]);
	}
	free(num);
	return 0;
}