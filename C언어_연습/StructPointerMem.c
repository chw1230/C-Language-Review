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
	printf("원의 반지름: %g\n", ring.radius);
	printf("원의 중심: %d,%d", (ring.center)->xpos, (ring.center)->ypos);
}