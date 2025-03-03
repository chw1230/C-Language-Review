#include <stdio.h>
//문제 9  search

int search(int *S,int searchMoney) {
	for (int i = 0; i < 10; i++) {
		if (S[i] == searchMoney) {
			printf("월급이 %d인 사람의 인덱스:%d", searchMoney, i);
		}
	}

}

void main() {
	int n;
	int salary[10] = { 150,200,220,245,270,280,300,350,390,600 };
	for (int i = 0; i < 10; i++) {
		printf("%d ", salary[i]);
	}
	printf("인덱스가 궁금한 월급을 입력하시오: ");
	scanf("%d", &n);
	search(&salary, n);
}