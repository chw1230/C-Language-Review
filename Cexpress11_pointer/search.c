#include <stdio.h>
//���� 9  search

int search(int *S,int searchMoney) {
	for (int i = 0; i < 10; i++) {
		if (S[i] == searchMoney) {
			printf("������ %d�� ����� �ε���:%d", searchMoney, i);
		}
	}

}

void main() {
	int n;
	int salary[10] = { 150,200,220,245,270,280,300,350,390,600 };
	for (int i = 0; i < 10; i++) {
		printf("%d ", salary[i]);
	}
	printf("�ε����� �ñ��� ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	search(&salary, n);
}