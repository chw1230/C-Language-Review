#include <stdio.h>

int main(void) {
	char* str = "Simple String";

	printf("1. puts test ------\n");
	puts(str);
	puts("So simple String");

	printf("2. fputs test -----\n");
	fputs(str, stdout); printf("\n");
	fputs("So simple String", stdout); printf("\n");

	printf("end");
}