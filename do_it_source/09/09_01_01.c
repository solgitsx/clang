#include <stdio.h>

void main()
{
    /* �ջ갪�� ������ sum�� �ջ꿡 ����� ���ڸ� ������ num�� �����Ѵ�. */
    int sum = 0, num;
    /* 1���� 5���� 1�� �����ϸ鼭 �ݺ��Ѵ�. */
    for (num = 1; num <= 5; num++) {
        /* �ջ��ϱ� �� sum���� ����Ͽ� ��num + sum = ���̶�� ����Ѵ�. */
        printf("num(%d) + sum(%d) = ", num, sum);
        /* sum�� num�� �ջ��Ѵ�. */
        sum = sum + num;
        /* �ջ� �� sum���� ����ϰ� �� �ٲ��� �Ѵ�. */
        printf("%d\n", sum);
    }
    /* �ݺ��� ���� ��, num ���� ���� sum ���� ���� �� �ٲ� �� ����Ѵ�. */
    printf("\nResult : num = %d  sum = %d\n", num, sum);
}