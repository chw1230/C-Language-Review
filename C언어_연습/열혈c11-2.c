#include <stdio.h>

void main(void) {
	// ���� 1 �ܾ��� ���� ���
	char str1[100];
	int idx = 0;
	scanf("%s", str1);
	while (str1[idx] != 0) {
		idx++;
	}
	printf("%d\n",idx);

	// ���� 2 �ܾ� ���� �����
	char str2[100];
	char str2_1[100];
	idx = 0;
	scanf("%s", str2);
	while (str2[idx] != 0) {
		idx++;
		// ���� ���ϱ�
	}
	int i = 0;
	while (str2[i] != 0) {
		str2_1[i] = str2[idx-1];
		i++;
		idx--;
	}
	str2_1[i] = 0; // �������� �ι��� �־��ֱ�!!!! ���� �ݺ������� �ܾ� �Ѱ��� �־��ָ鼭 �ι��ڰ� �ȵ�!!!
	printf("%s\n", str2_1);


	// ���� 3 ���ڿ� �߿��� ���� ū �ƽ�Ű �ڵ� ��ȯ�ϱ�
	char str3[100];
	idx = 0;
	scanf("%s", str3);
	int num = 0;
	int numIdx = 0;
	while (str3[idx] != 0) {
		if (num <= str3[idx]) { // �ƽ�Ű�ڵ� ���ϴ� ���ǹ�!
			num = str3[idx];
		}
		idx++;
	}
	printf("%c", num);
}
