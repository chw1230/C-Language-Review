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
		printf("이름 입력: ");
		scanf("%s", employee1[i].name);

		printf("주민등록번호( ~ - ~ )입력: ");
		scanf("%s", employee1[i].number);

		printf("급여정보 입력: ");
		scanf("%d", &employee1[i].pay);
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		printf("\n이름 : %s", employee1[i].name);
		printf("\n주민등록번호: %s", employee1[i].number);
		printf("\n급여정보 : %d", employee1[i].pay);
		printf("\n");
	}
}