#include <stdio.h>
//문제 2번 원소들의 합,차 구하기

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_diff = y - x;
	*p_sum = x + y;
}


void main() {
	int x,y,sum,diff;
	printf("enter two integers:");
	scanf("%d %d", &x, &y);
	get_sum_diff(x, y, &sum, &diff);
	printf("sum:%d\ndiff:%d", sum, diff);
}