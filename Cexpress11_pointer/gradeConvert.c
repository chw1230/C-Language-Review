#include <stdio.h>
// ���� 5   4.3���� 100�� ������ ��ȯ�Ͽ� �迭�� �����ϱ�
void convert(double* grades, double* scores, int size) {
	for (int i = 0; i < size; i++) {
		scores[i] = 100 * grades[i] / 4.3;
		printf("%.2lf ", scores[i]);
	}
}

void main() {
	double student_grades[10] = { 0.0 ,0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0,4.3 };
	double scores[10];
	for (int i = 0; i < 10; i++) {
		printf("%.2lf ", student_grades[i]);
	}
	printf("\n");
	convert(student_grades, scores, 10);
	
}