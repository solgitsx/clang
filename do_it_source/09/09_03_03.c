#include <stdio.h>

/* step�� ���޵� ���ڿ� �ش��ϴ� ���� ����ϴ� �Լ� */
void ShowMultiplication(int step)
{
    int i;
    /* i������ 1 ~ 9���� 1�� �����ϸ鼭 �� 9�� �ݺ��մϴ� */
    for (i = 1; i <= 9; i++) {
        /* step * i = step*i �������� ����մϴ� */
        printf("%d * %d = %d\n", step, i, step * i);
    }
}

void main()
{
    /* �Ű������� 5�� �����Ͽ� 5���� ����Ѵ� */
    ShowMultiplication(5);
}