#include <stdio.h>

void main()
{
    int step, i;
    /* 2�ܿ��� 9�ܱ��� ��µǵ��� �ݺ��մϴ�. */
    for (step = 2; step <= 9; step++) {
        /* i������ 1 ~ 9���� 1�� �����ϸ鼭 �� 9�� �ݺ��մϴ� */
        for (i = 1; i <= 9; i++) {
            /* step * i = step*i �������� ����մϴ� */
            printf("%d * %d = %d\n", step, i, step*i);
        }
    }
}