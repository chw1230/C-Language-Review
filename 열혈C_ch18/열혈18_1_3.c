#include <stdio.h>

void ComplexFuncOne(int** ptr1, int*(*ptr2)[5]) {

}
void ComplexFuncTwo(int***ptr3, int***(*ptr)[5]) {

}
int main(void) {
	int *arr1[3];//int * �� ������ �̷��� 1���� �迭
	int *arr2[3][5];//int * �� ������ �̷���, ���α��̰� 5�� 2���� �迭
	int **arr3[5];// int** �� ������ �̷��� 1���� �迭
	int ***arr4[3][5];// int*** �� ������ �̷���, ���α��̰� 5�� 2���� �迭
	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
}