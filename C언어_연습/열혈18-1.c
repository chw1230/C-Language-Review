#include <stdio.h>

int main(void) {
	// ���� 1
	int* arr1[5];
	int* arr2[3][5];
	/*
	? ? ? = arr1;
	? ? ? = arr2;
	??? �� �� �� �ִ� ����?
	*/
	int **ptr1 = arr1;
	int* (*ptr2)[5] = arr2;

	// ���� 2
	/*
	void SimpleFuncOne(???, ???){ .... }
	void SimpleFuncTwo(???, ???){ .... }
	int main(void) { 
		int arr1[3];
		int arr2[4];
		int arr3[3][4];
		int arr4[2][4];

		SimpleFuncOne(arr1,arr2);
		SimpleFuncTwo(arr3,arr4);

	}
	??? ��� ��� �� �� �ִ� ����?

	One( int * ptr1, int *ptr2)
	Two( int *(ptr3)[4] , int *(ptr4)[4])
	*/
	
	// ���� 3
	/*
	void ComplexFuncOne( ??? , ??? ) {....}
	void ComplexFuncTwo( ??? , ??? ) {....}
	int main(void) {
		int* arr1[3];
		int* arr2[3][5];
		int** arr3[5];
		int*** arr4[3][5];

		ComplexFuncOne(arr1,arr2);
		ComplexFuncTwo(arr3,arr3);
	??? ���ϱ�
	One(int ** ptr1,int *(*(ptr2)[5]))
	Two(int *** ptr3,int ***(*ptr4)[5])
	}
	*/

	// ���� 4
	/*
	int main(void){
		int arr[2][2][2]={1,2,3,4,5,6,7,8};
		printf("%d \n",arr[1][0][1]);
		return 0;
		arr[1][0][1]�� ��ü �� �� �ִ� 5�� �̻� �����ϱ�
		1. *(arr+1)[0][1]
		2. *(*(arr+1))[1]
		3. *(*(*(arr+1))+1)
		4. (*(arr[1]+0))[1]
		5. *(*(arr[1])+1)
		6. *(arr[1][0]+1)
	}
	*/

}