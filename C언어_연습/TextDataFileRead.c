#include <stdio.h>

int main(void) {
	char str[30];
	int ch;
	FILE* fp = fopen("C:\\CFileInOut\\simple.txt", "rt"); //simple.txt 가 텍스트 모드 상에서 저장 되어서 입력 스트림을 형성할 때도 텍스트 모드로 형성 해야한다.
	if (fp == NULL) {
		puts("파일 오픈 실패!");
		return -1;
	}

	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
	return 0;
}