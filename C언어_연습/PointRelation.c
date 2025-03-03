#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
	struct point* ptr; // 구조체 point의 포인터 변수 선언
};

int main(void) {
	struct point pos1 = { 1,1 };
	struct point pos2 = { 2,2 };
	struct point pos3 = { 3,3 };
	
	pos1.ptr = &pos2; // 1->2 연결
	pos2.ptr = &pos3; // 2->3 연결
	pos3.ptr = &pos1; // 3->1 연결

	printf("점의 연결관계\n");
	printf("[%d, %d]와(과) [%d,%d] 연결\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos); // pos1.ptr 은  &ptr2 를 의미함을 이용
	printf("[%d, %d]와(과) [%d,%d] 연결\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos); // pos2.ptr 은  &ptr3 를 의미함을 이용
	printf("[%d, %d]와(과) [%d,%d] 연결\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos); // pos3.ptr 은  &ptr1 를 의미함을 이용
}