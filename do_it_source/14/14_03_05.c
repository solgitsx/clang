#include <stdio.h>
#include <stdlib.h>     /* atoi �Լ��� ����ϱ� ���� */

void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string); /* ù ��° ���ڸ� �Է¹��� */
    printf("input second number : ");
    gets(second_sting);   /* �� ��° ���ڸ� �Է¹��� */

    first_num = atoi(first_string);  /* ���ڿ� -> ���� */
    second_num = atoi(second_string);  /* ���ڿ� -> ���� */
    /* ������ ��ȯ�� �� ���� �ջ��� ��� ��� */
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}