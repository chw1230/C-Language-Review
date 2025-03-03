#include <stdio.h>

typedef struct dbshort
{
	unsigned short upper;
	unsigned short lower;
} DBShort;

typedef union rdbuf
{
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
} RDBuf;

int main(void) {
	RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u \n", buf.sBuf.upper);
	printf("하위 2바이트: %u \n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드: %c \n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c \n", buf.bBuf[3]);
	return 0;
}

/*
이를 통해 알 수 있는 것 
입력과 다른 결과가 나오는 것을 통해서 공간을 공유하고 있다는 것을 알 수 있다.
이 공간에 다른 타입으로 접근하면 입력했던 값과는 다른 값이 나오는 것!
*/