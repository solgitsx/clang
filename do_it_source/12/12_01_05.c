#include <stdio.h>

void main()
{
    /* data �迭�� 1 ~ 5 ������ ���� �����ϰ� �ִ� */
    char data[5] = { 1, 2, 3, 4, 5 };
    /* �ջ꿡 ����� result ������ 0���� �ʱ�ȭ �Ѵ�. */
    int result = 0, i;

    /* 5�� �ݺ��ϸ鼭 �迭�� �� ��� ���� result ������ �ջ� */
    for ( i = 0; i < 5; i++) {
        result = result + data[i];
    }
    /* �ջ��� ����� ����Ѵ�. */
    printf("data �迭�� �� ����� ���� %d�Դϴ�\n", result);
}