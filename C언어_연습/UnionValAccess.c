#include <stdio.h>

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void) {
	UBox ubx;  // 8바이트 메모리 할당 -> double 때문에
	ubx.mem1 = 20;  // 공용 공간에 20을 저장
	printf("%d \n", ubx.mem2);  // 공용 공간에 20이 저장되어 있으므로 20을 출력

	ubx.mem3 = 7.15; // 공용 공간에 7.15을 저장
	printf("%d \n", ubx.mem1);  // 공용 공간에 7.15 실수가 저장되어 있으므로 이상한 값이 출력된다.
	printf("%d \n", ubx.mem2); // 공용 공간에 7.15 실수가 저장되어 있으므로 이상한 값이 출력된다.
	printf("%g \n", ubx.mem3);
	return 0;
}