#include <stdio.h>

int main(void) {
	FILE* fp = fopen("C:\\CFileInOut\\data.txt", "wt"); // 경로를 포함해서 파일의 이름을 지정하기!!
	if (fp == NULL) {
		puts("파일 오픈 실패");
		return -1; // 비정상적 종료를 의미하는 -1을 반환
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);  // 스트림의 종료
	return 0;

}