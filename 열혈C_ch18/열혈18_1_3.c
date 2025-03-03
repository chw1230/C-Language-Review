#include <stdio.h>

void ComplexFuncOne(int** ptr1, int*(*ptr2)[5]) {

}
void ComplexFuncTwo(int***ptr3, int***(*ptr)[5]) {

}
int main(void) {
	int *arr1[3];//int * 형 변수로 이뤄진 1차원 배열
	int *arr2[3][5];//int * 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
	int **arr3[5];// int** 형 변수로 이뤄진 1차원 배열
	int ***arr4[3][5];// int*** 형 변수로 이뤄진, 가로길이가 5인 2차원 배열
	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
}