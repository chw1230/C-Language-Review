#include <stdio.h>
//문제 11 merge

int merge(int*A,int*B,int*C) {
	int cntA = 0, cntB = 0;
	for (int i = 0; i < 8; i++) {
		//한쪽에서 요소가 다 떨어졌을때 남은 요소를 모두 추가
		if (cntA >= 4) {
			for (int i = 4 + cntB; i < 8; i++) {
				C[i] = B[cntB];
				cntB++;
			}
		}
		//한쪽에서 요소가 다 떨어졌을때 남은 요소를 모두 추가
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