#include <stdio.h>
#include <stdlib.h>
//0이상 99이하 난수 5개 생성
int main_c(void) {
	int i;
	printf("난수의 범위 : 0부터 99까지 \n");
	for (int i = 0; i < 5; i++) {
		printf("난수 출력: %d\n", rand()%100);
		
	}
	return 0;
}
//계속 같은 난수만 생성되는 문제 발생