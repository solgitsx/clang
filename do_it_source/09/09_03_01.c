#include <stdio.h>

void main()
{
    int i;
    /* i ������ 1 ~ 9���� 1�� �����ϸ鼭 �� 9�� �ݺ��մϴ� */
    for (i = 1; i <= 9; i++) {
        /* 2 * i = 2*i �������� ����մϴ� */
        printf("2 * %d = %d\n", i, 2 * i);
    }
}