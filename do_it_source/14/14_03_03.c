#include <stdio.h>
void main()
{
    int num = 0, count = 0;
    char num_string[4] = "123";
    /* ���ڿ��� ���� ������ �ݺ� */
    while (num_string[count] != 0) {
        /* �ݺ��� ������ ���� ���� 10�� ���ؼ� �ڸ����� ������Ŵ
           num ���� ��ȭ :  1 �� 0*10+1 �� 1*10+2 �� 12*10+3 �� 123  */
        num = num * 10 + (num_string[count] - '0');
        count++;   /* ���� ���ڷ� �̵� */
    }
    printf(" %s -> %d\n", num_string, num);
}