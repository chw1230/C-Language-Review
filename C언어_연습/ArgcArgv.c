#include <stdio.h>

int main(int argc, char* argv[]) {
	printf("전달된 문자열의 수: %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("%d번째 문자열: %s", i + 1, argv[i]);
	}
	return 0;
}