#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//2���� �ֻ���
//��� ���� ������ �����Ǵ� ���� �ذ� ���
int main_d(void) {	
	srand((int)time(NULL));
	for (int i = 0; i < 2; i++) {
		printf("�ֻ���%d ���: %d\n",i+1, rand() % 6+1);

	}
	return 0;
}
