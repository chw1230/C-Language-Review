#include <stdio.h>

int main(void) {
	FILE* fp = fopen("C:\\CFileInOut\\data.txt", "wt"); // ��θ� �����ؼ� ������ �̸��� �����ϱ�!!
	if (fp == NULL) {
		puts("���� ���� ����");
		return -1; // �������� ���Ḧ �ǹ��ϴ� -1�� ��ȯ
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);  // ��Ʈ���� ����
	return 0;

}