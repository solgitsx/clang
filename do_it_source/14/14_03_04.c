#include <stdio.h>

int ArrayToInteger(char string[])
{
    int count = 0, num = 0;
    /* ���ڿ��� ���� ������ �ݺ� */
 	while(string[count] != 0){
        /* �ݺ��� ������ ���� ���� 10�� ���ؼ� �ڸ����� ������Ŵ */
        num = num * 10 + string[count] - '0';
        count++; /* ���� ���ڷ� �̵� */
    }
    return num;
}

void main()
{
    int first_num, second_num;
    char first_string[16], second_string[16];

    printf("input first number : ");
    gets(first_string);   /* ù ��° ���ڸ� �Է¹��� */
    printf("input second number : ");
    gets(second_string);   /* �� ��° ���ڸ� �Է¹��� */

    first_num = ArrayToInteger(first_string);  /* ���ڿ� -> ���� */
    second_num = ArrayToInteger(second_string);  /* ���ڿ� -> ���� */
                             /* ������ ��ȯ�� �� ���� �ջ��� ��� ��� */
    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);
}