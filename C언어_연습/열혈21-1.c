#include <stdio.h>

int main(void) {
	int a;
	a = getchar();
	int diff = 'a' - 'A';

	if ('a' <= a && a <= 'z') {
		putchar(a - diff);
	}
	else if ('A' <= a && a <= 'Z') {
		putchar(a + diff);
	}
	else {
		putchar("오류입니다.");
	}
}