#include <stdio.h>
#include <stdlib.h>


void main(void) {
	printf("���ڼ�: ");
	int n;
	scanf_s("%d", &n);
	getchar(); // \n ����

	char* str = (char*)malloc(sizeof(char) * (n+1)); // ���ڼ� ũ�⺸�� �ϳ� �� ũ��!
	gets(str);

	for(int i  = n-1; i >= 0; i--) // ����������(n���� �� ���� ���������ϱ� n-1 ����!)
	{
		if (str[i] == ' ') { // ������ ������
			printf("%s ", &str[i + 1]); // ���� �ں��� ��� 
			str[i] = 0; //�� ���� ����(=0)���� ����ϴ� printf�� ������ ���ؼ� ������ 0���� �ٲ��ֱ�!
		}
	}
	printf("%s", &str[0]);
	free(str);
}
/*
i am a boy
boy am a i �� �ٲ���
*/