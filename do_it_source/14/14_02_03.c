#include <stdio.h>

void main()
{
    int input_data = getchar();   /* �� ���� ���ڸ� �Է¹��� */
    rewind(stdin);   /* ǥ�� �Է� ���ۿ� �ִ� ��� �Է°��� ������ */
    printf("first input : %c\n", input_data);  /* �Է¹��� ���ڸ� ��� */
    input_data = getchar();
    rewind(stdin);   /* ǥ�� �Է� ���ۿ� �ִ� ��� �Է� ���� ������ */
    printf("second input : %c\n", input_data);  /* �Է¹��� ���ڸ� ��� */
}