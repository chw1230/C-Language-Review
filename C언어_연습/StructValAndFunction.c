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
 1. GetCurrentPosition 함수의 반환값(= 구조체 변수/cen)을 curPos에 저장( 이 과정에서 cen의 멤버에 저장된 값들이 curPos의 멤버에 복사되어 저장됨! ) 
 2. 변수 curPos를 함수 ShowPosition의 인자로 전달하면서 curPos에 저장된 값들은 pos 속 값들에게 복사 시킴!!
 3. pos 속 내용들을 출력!
*/