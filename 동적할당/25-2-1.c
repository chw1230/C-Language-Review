#include <stdio.h>
#include <stdlib.h>


void main(void) {
	printf("글자수: ");
	int n;
	scanf_s("%d", &n);
	getchar(); // \n 삭제

	char* str = (char*)malloc(sizeof(char) * (n+1)); // 글자수 크기보다 하나 더 크게!
	gets(str);

	for(int i  = n-1; i >= 0; i--) // 마지막에는(n에는 널 종료 문자있으니까 n-1 부터!)
	{
		if (str[i] == ' ') { // 공백을 만나면
			printf("%s ", &str[i + 1]); // 공백 뒤부터 출력 
			str[i] = 0; //널 종료 문자(=0)까지 출력하는 printf의 성질에 의해서 공백을 0으로 바꿔주기!
		}
	}
	printf("%s", &str[0]);
	free(str);
}
/*
i am a boy
boy am a i 로 바꿔줌
*/