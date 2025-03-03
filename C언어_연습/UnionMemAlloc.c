#include <stdio.h>

// 구조체
typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;
} SBox;

// 공용체
typedef struct ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

void main(void) {
	SBox sbx;
	UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
}
