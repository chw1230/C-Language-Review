#include <stdio.h>
#include <stdlib.h>
//0�̻� 99���� ���� 5�� ����
int main_c(void) {
	int i;
	printf("������ ���� : 0���� 99���� \n");
	for (int i = 0; i < 5; i++) {
		printf("���� ���: %d\n", rand()%100);
		
	}
	return 0;
}
//��� ���� ������ �����Ǵ� ���� �߻�