#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr) {
	(*ptr).xpos = (*ptr).xpos * -1;
	ptr->ypos = (ptr->ypos) * -1;
	/* 참조값을 활용하여 원점 대칭 시키기! */
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