#include <stdio.h>

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void) {
	UBox ubx;  // 8����Ʈ �޸� �Ҵ� -> double ������
	ubx.mem1 = 20;  // ���� ������ 20�� ����
	printf("%d \n", ubx.mem2);  // ���� ������ 20�� ����Ǿ� �����Ƿ� 20�� ���

	ubx.mem3 = 7.15; // ���� ������ 7.15�� ����
	printf("%d \n", ubx.mem1);  // ���� ������ 7.15 �Ǽ��� ����Ǿ� �����Ƿ� �̻��� ���� ��µȴ�.
	printf("%d \n", ubx.mem2); // ���� ������ 7.15 �Ǽ��� ����Ǿ� �����Ƿ� �̻��� ���� ��µȴ�.
	printf("%g \n", ubx.mem3);
	return 0;
}