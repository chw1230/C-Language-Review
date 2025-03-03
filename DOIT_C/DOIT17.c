#include <stdio.h>
#include <malloc.h>
//2차원 메모리의 동적 할당
void main() {
	char** p;
	p = (char**)malloc(sizeof(char*) * 2);

	for (int i = 0; i < 2; i++) {
		*(p+i) = (char*)malloc(sizeof(char) * 3);
	}
	for (int i = 0; i < 2; i++) free(*(p + i));
	free(p);
}