#include <stdio.h>

void main(void) {
	char charArr[] = { 'G','o','o','d',' ','t','i','m','e' };
	for (int i = 0; i < sizeof(charArr)/ sizeof(char) ; i++)
	{
		printf("%c", charArr[i]);
	}
}