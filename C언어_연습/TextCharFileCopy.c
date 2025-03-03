#include <stdio.h>

int main(void) {
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL) { 
		puts("파일오픈 실패!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) { // fgetc 함수는 파일의 끝에 도착해서 더 이상 읽을 데이터가 없거나 오류가 발생하는 경우에 EOF 반환
		fputc(ch, des);
	}

	if (feof(src) != 0)  // feof 를 통해서 EOF의 반환 원인 확인하기
		puts("파일 복사 완료!");
	else
		puts("파일 복사 실패!");

	fclose(src);
	fclose(des);
	return 0;
}