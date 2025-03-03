#include <stdio.h>

void SoSimpleFunc(void) {
	printf("I'm so simple");
}

int main(void) {
	int num = 20;
	void* ptr;

	ptr = &num; // 변수의 주소 값을 담을 수 있음
	printf("%p \n", ptr);

	ptr = SoSimpleFunc; // 함수의 주소 값을 담을 수 있음
	printf("%p \n", ptr);
	return 0;
}