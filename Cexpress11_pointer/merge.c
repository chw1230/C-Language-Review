#include <stdio.h>
//���� 11 merge

int merge(int*A,int*B,int*C) {
	int cntA = 0, cntB = 0;
	for (int i = 0; i < 8; i++) {
		//���ʿ��� ��Ұ� �� ���������� ���� ��Ҹ� ��� �߰�
		if (cntA >= 4) {
			for (int i = 4 + cntB; i < 8; i++) {
				C[i] = B[cntB];
				cntB++;
			}
		}
		//���ʿ��� ��Ұ� �� ���������� ���� ��Ҹ� ��� �߰�
		else if (cntB >= 4) {
			for (int i = cntA + 4; i < 8; i++) {
				C[i] = A[cntA];
				cntA++;
			}
		}
		else {
			if (A[cntA] < B[cntB]) {
				C[cntA + cntB] = A[cntA];
				cntA++;
			}
			else if (A[cntA] > B[cntB]) {
				C[cntA + cntB] = B[cntB];
				cntB++;
			}
			else {
				C[cntA + cntB] = A[cntA];
				cntA++;
			}
		}
	}

}

void main() {
	int A[4] = { 1,3,5,7};
	int B[4] = { 2,4,6,8 };
	int C[8];
	merge(&A, &B, &C);
	for (int i = 0; i < 8; i++) {
		printf("%d ", C[i]);
	}
}