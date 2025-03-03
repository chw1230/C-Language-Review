#include <stdio.h>

typedef struct person {
	char name[20];
	char phoneMem[20];
	int age;
} Person;

void ShowPersinInfo(Person man) {
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneMem);
	printf("age: %d \n", man.age);
}

Person ReadPersonInfo(void) {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneMem);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

int main(void) {
	Person man = ReadPersonInfo();
	ShowPersinInfo(man);
	return 0;
}