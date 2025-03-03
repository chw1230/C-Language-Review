#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

// �� ����ü�� ������ ����� ���� �ٲٴ� �Լ� �����
void SwapPoint(Point* ptr1, Point* ptr2) {
	Point tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
	// ����ü �� ���� �������� ��� ����Ǿ� ���޵Ǵ� ���� ���!
	// ���� x,y�� ������ �ʿ䰡 ����!!!
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