#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr) {
	(*ptr).xpos = (*ptr).xpos * -1;
	ptr->ypos = (ptr->ypos) * -1;
	/* �������� Ȱ���Ͽ� ���� ��Ī ��Ű��! */
}

void ShowPositionPos(Point pos)
{
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main(void) {
	Point pos = { 7, -5 };
	OrgSymTrans(&pos);
	ShowPositionPos(pos);
	OrgSymTrans(&pos);
	ShowPositionPos(pos);
}