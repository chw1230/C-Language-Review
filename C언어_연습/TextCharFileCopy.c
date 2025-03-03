#include <stdio.h>

int main(void) {
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL) { 
		puts("���Ͽ��� ����!");
		return -1;
	}

	while ((ch = fgetc(src)) != EOF) { // fgetc �Լ��� ������ ���� �����ؼ� �� �̻� ���� �����Ͱ� ���ų� ������ �߻��ϴ� ��쿡 EOF ��ȯ
		fputc(ch, des);
	}

	if (feof(src) != 0)  // feof �� ���ؼ� EOF�� ��ȯ ���� Ȯ���ϱ�
		puts("���� ���� �Ϸ�!");
	else
		puts("���� ���� ����!");

	fclose(src);
	fclose(des);
	return 0;
}