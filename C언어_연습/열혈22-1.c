#include <stdio.h>
#include <string.h>

struct employee
{
	char name[10];
	char number[15];
	int pay;
};


int main(void) {
	struct employee employee1[3];
	
	for (int i = 0; i < 3; i++)
	{
		printf("�̸� �Է�: ");
		scanf("%s", employee1[i].name);

		printf("�ֹε�Ϲ�ȣ( ~ - ~ )�Է�: ");
		scanf("%s", employee1[i].number);

		printf("�޿����� �Է�: ");
		scanf("%d", &employee1[i].pay);
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		printf("\n�̸� : %s", employee1[i].name);
		printf("\n�ֹε�Ϲ�ȣ: %s", employee1[i].number);
		printf("\n�޿����� : %d", employee1[i].pay);
		printf("\n");
	}
}