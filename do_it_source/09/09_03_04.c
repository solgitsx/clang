#include <stdio.h>
/* step�� ���޵� ���ڿ� �ش��ϴ� ���� ����ϴ� �Լ� */
void ShowMultiplication(int step)
{
    int i;
    /* i������ 1 ~ 9���� 1�� �����ϸ鼭 �� 9�� �ݺ��մϴ� */
    for (i = 1; i <= 9; i++) {
        /* step * i = step*i �������� ����մϴ� */
        printf("%d * %d = %d\n", step, i, step*i);
    }
}

void main()
{
    int m;
    /* 2�ܿ��� 9�ܱ��� ��µǵ��� �ݺ��մϴ�. */
    for (m = 2; m <= 9; m++) {
        /* �Ű������� 2 ~ 9 ���� �����Ͽ� �������� ����Ѵ� */
        ShowMultiplication(m);
    }
}