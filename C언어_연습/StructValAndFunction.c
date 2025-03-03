#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(void) {
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);
	return 0;
}

/*
 1. GetCurrentPosition �Լ��� ��ȯ��(= ����ü ����/cen)�� curPos�� ����( �� �������� cen�� ����� ����� ������ curPos�� ����� ����Ǿ� �����! ) 
 2. ���� curPos�� �Լ� ShowPosition�� ���ڷ� �����ϸ鼭 curPos�� ����� ������ pos �� ���鿡�� ���� ��Ŵ!!
 3. pos �� ������� ���!
*/