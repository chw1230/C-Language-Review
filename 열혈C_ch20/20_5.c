#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���������� ����
int main_e(void) {
	srand((int)time(NULL));
	int action;
	int cmp;
	int lose = 0;
	int win = 0;
	int draw = 0;
	while (1) {
		printf("������ 1,������ 2,���� 3 �ϳ��� �����Ͻÿ�: ");
		scanf_s("%d", &action);
		if (action <= 0 || action > 3) {
			printf("\n1,2,3�� ���ϴ� ���ڸ��� �Է��Ͻÿ�\n");
		}
		else {
			cmp = rand() % 3 + 1;
			//�ΰ��¸�
			if (action == 1 && cmp == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����\n");
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			else if (action == 2 && cmp == 3) {
				printf("����� ���� ����, ��ǻ�ʹ� �� ����\n");
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			else if (action == 3 && cmp == 1) {
				printf("����� �� ����, ��ǻ�ʹ� ���� ����\n");
				printf("����� �̰���ϴ�.\n");
				win++;
			}
			//���
			if (action == cmp) {
				printf("�����ϴ�.\n");
				draw++;
			}
			//��ǻ�ͽ¸�
			if (action == 2 && cmp == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ����\n");
				printf("����� �����ϴ�.\n");
				lose++;
				break;
			}
			else if (action == 3 && cmp == 2) {
				printf("����� �� ����, ��ǻ�ʹ� ���� ����\n");
				printf("����� �����ϴ�.\n");
				lose++;
				break;
			}
			else if (action == 1 && cmp == 3) {
				printf("����� ���� ����, ��ǻ�ʹ� �� ����\n");
				printf("����� �����ϴ�.\n");
				lose++;
				break;
			}
		}
	}
	printf("����� ����: %d�� %d�� %d��", win, draw, lose);
}
