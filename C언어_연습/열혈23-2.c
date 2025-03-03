#include <stdio.h>
#include <math.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct {
	Point p1;
	Point p2;
} Rectangle;

void CalcArea(Rectangle r) {
	printf("����: %d\n",(r.p1.xpos - r.p2.xpos) * (r.p1.ypos - r.p2.ypos));
}

void ShowPositionRec(Rectangle r) {
	printf("�� ��� [%d, %d] ", r.p1.xpos, r.p1.ypos );
	printf("/ �� �ϴ� [%d, %d] ", r.p1.xpos, r.p2.ypos );
	printf("/ �� �ϴ� [%d, %d] ", r.p2.xpos, r.p2.ypos);
	printf("/ �� ��� [%d, %d] ", r.p2.xpos, r.p1.ypos );
}

int main(void) {
	Rectangle r1 = { {1,1}, {4,4} };
	CalcArea(r1);
	ShowPositionRec(r1);
	printf("\n\n");
	Rectangle r2 = { {0,0}, {7,5} };
	CalcArea(r2);
	ShowPositionRec(r2);

	return 0;
}