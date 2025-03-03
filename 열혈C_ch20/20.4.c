#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//2개의 주사위
//계속 같은 난수만 생성되는 문제 해결 방안
int main_d(void) {	
	srand((int)time(NULL));
	for (int i = 0; i < 2; i++) {
		printf("주사위%d 출력: %d\n",i+1, rand() % 6+1);

	}
	return 0;
}
