#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//가위바위보 게임
int main_e(void) {
	srand((int)time(NULL));
	int action;
	int cmp;
	int lose = 0;
	int win = 0;
	int draw = 0;
	while (1) {
		printf("바위는 1,가위는 2,보는 3 하나를 선택하시오: ");
		scanf_s("%d", &action);
		if (action <= 0 || action > 3) {
			printf("\n1,2,3에 속하는 숫자만을 입력하시오\n");
		}
		else {
			cmp = rand() % 3 + 1;
			//인간승리
			if (action == 1 && cmp == 2) {
				printf("당신은 바위 선택, 컴퓨터는 가위 선택\n");
				printf("당신이 이겼습니다.\n");
				win++;
			}
			else if (action == 2 && cmp == 3) {
				printf("당신은 가위 선택, 컴퓨터는 보 선택\n");
				printf("당신이 이겼습니다.\n");
				win++;
			}
			else if (action == 3 && cmp == 1) {
				printf("당신은 보 선택, 컴퓨터는 바위 선택\n");
				printf("당신이 이겼습니다.\n");
				win++;
			}
			//비김
			if (action == cmp) {
				printf("비겼습니다.\n");
				draw++;
			}
			//컴퓨터승리
			if (action == 2 && cmp == 1) {
				printf("당신은 가위 선택, 컴퓨터는 바위 선택\n");
				printf("당신이 졌습니다.\n");
				lose++;
				break;
			}
			else if (action == 3 && cmp == 2) {
				printf("당신은 보 선택, 컴퓨터는 가위 선택\n");
				printf("당신이 졌습니다.\n");
				lose++;
				break;
			}
			else if (action == 1 && cmp == 3) {
				printf("당신은 바위 선택, 컴퓨터는 보 선택\n");
				printf("당신이 졌습니다.\n");
				lose++;
				break;
			}
		}
	}
	printf("당신의 성적: %d승 %d무 %d패", win, draw, lose);
}
