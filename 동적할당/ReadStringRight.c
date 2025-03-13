#include <stdio.h>
#include <stdlib.h>

char* ReadUserName() {
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("What is your name?");
	gets(name);
	return name;
}

void main(void) {
	/*
	동적할당 공부
	*/

	char* name1;
	char* name2;

	name1 = ReadUserName();
	printf("name1: %s\n", name1);

	name2 = ReadUserName();
	printf("name2: %s\n", name2);

	printf("again name1: %s\n", name1);
	printf("again name2: %s\n", name2);
	free(name1);
	free(name2);
}

