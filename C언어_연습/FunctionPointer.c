#include <stdio.h>

void SimpleFunc(int n1, int n2) {
	printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void ShowString(char* str) {
	printf("%s \n", str);
}

int main(void) {
	char* str = "Function Pointer";
	int num1 = 10, num2 = 20;

	void (*fptr1) (int, int) = SimpleFunc;
	void (*fptr2) (char *) = ShowString; // 여기서 void (*fptr2) (char *) 이런식으로 선언한 이유! -> 매개변수가 char 형 포인터 이기때문에 (char *) 이렇게 선언
		 
	// 함수 포인터 변수를 이용한 호출!
	fptr1(num1, num2);
	fptr2(str);
}