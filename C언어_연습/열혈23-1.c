#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

// 두 구조체의 변수를 대상을 값을 바꾸는 함수 만들기
void SwapPoint(Point* ptr1, Point* ptr2) {
	Point tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
	// 구조체 안 속의 변수들이 모두 복사되어 전달되는 성질 사용!
	// 직접 x,y에 접근할 필요가 없음!!!
}

void ShowPointPtr(Point ptr1, Point ptr2) {
	printf("[%d, %d]\n", ptr1.xpos, ptr1.ypos);
	printf("[%d, %d]", ptr2.xpos, ptr2.ypos);
}

int main(void) {
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	SwapPoint(&pos1, &pos2);
	ShowPointPtr(pos1, pos2);
	return 0;
}