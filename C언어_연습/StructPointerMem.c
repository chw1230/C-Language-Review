#include <stdio.h>

struct point {
	int xpos;
	int ypos;
};

struct circle
{
	double radius; 
	struct point* center;
};


int main(void) {
	struct point cen = { 1,2 };
	double r = 5.5;

	struct circle ring = { r,&cen };
	printf("���� ������: %g\n", ring.radius);
	printf("���� �߽�: %d,%d", (ring.center)->xpos, (ring.center)->ypos);
}