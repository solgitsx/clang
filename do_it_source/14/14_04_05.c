#include <stdio.h>
void main()
{
	int num = 0;
	/* �������� ���̸� �Է��� ������ �ݺ��ϱ� ���� ���� �ݺ��� ����� */
	while (1) {
		printf("input age : ");
		/* scanf �Լ��� �����ϸ� 0�� ��ȯ�Ѵ� */
		if (scanf("%d", &num) == 0) {
			rewind(stdin);  /* �Է� ���۸� ��� ���� */
			printf("[Enter] digit number!!\n");
		}
		else {
			/* 0���� ũ�� 130 ������ ���ڸ� �������� ���̷� ������ */
			if (num > 0 && num <= 130) {
				break; /* ���������� �ԷµǾ��� ������ �ݺ����� �������� */
			}
			else {
				/* ������ ������ �߸� �ԷµǾ��ٰ� �˸� */
				printf("Incorrect Age!!\n");
			}
		}
	}
	/* �Էµ� ���̸� Ȯ���ϱ� ���� ����� */
	printf("your age : %d \n", num);
}
