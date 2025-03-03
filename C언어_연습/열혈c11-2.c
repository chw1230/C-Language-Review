#include <stdio.h>

void main(void) {
	// 문제 1 단어의 길이 출력
	char str1[100];
	int idx = 0;
	scanf("%s", str1);
	while (str1[idx] != 0) {
		idx++;
	}
	printf("%d\n",idx);

	// 문제 2 단어 역순 만들기
	char str2[100];
	char str2_1[100];
	idx = 0;
	scanf("%s", str2);
	while (str2[idx] != 0) {
		idx++;
		// 길이 구하기
	}
	int i = 0;
	while (str2[i] != 0) {
		str2_1[i] = str2[idx-1];
		i++;
		idx--;
	}
	str2_1[i] = 0; // 마지막에 널문자 넣어주기!!!! 위의 반복문에서 단어 한개씩 넣어주면서 널문자가 안들어감!!!
	printf("%s\n", str2_1);


	// 문제 3 문자열 중에서 가장 큰 아스키 코드 반환하기
	char str3[100];
	idx = 0;
	scanf("%s", str3);
	int num = 0;
	int numIdx = 0;
	while (str3[idx] != 0) {
		if (num <= str3[idx]) { // 아스키코드 비교하는 조건문!
			num = str3[idx];
		}
		idx++;
	}
	printf("%c", num);
}
