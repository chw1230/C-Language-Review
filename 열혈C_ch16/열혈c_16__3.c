
#include <stdio.h>

int main() {
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	int score[5][5];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &score[i][j],sizeof(score));
		}
	}
	//�л� �� ���� ���ϱ�
	for (int e = 0; e < 4; e++) {
		sum1 = 0;
		for (int k = 0; k < 4; k++) {
			sum1 += score[e][k];
		}
		score[e][4] = sum1;
		//printf("%d�л��� ����: %d\n",e+1, score[e][4]);
	}

	//���� �� ���� ���ϱ�
	for (int t = 0; t < 4; t++) {
		sum2 = 0;
		for (int f = 0; f < 4; f++) {
			 sum2 += score[f][t];
		}
		score[4][t] = sum2;
		sum += sum2;
		//printf("���� �� ����: %d\n", score[4][t]);
		score[4][4] = sum;
	}
	//��ü ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
}


//�Է� ����: 5 4 6 5 3 6 9 3 4 8 2 7 3 8 9 7 