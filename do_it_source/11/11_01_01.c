#include <stdio.h>

int Sum(int data1, int data2) /* data1, data2�� ������������ ������. 5�� 3���� �ʱ�ȭ �� */
{
    int  result = data1 + data2;  /* ���� ����, data + data2 ������ �ʱ�ȭ�� */
    return result;
}

void main()
{
    int  result;     /* ���� ����, �ʱ�ȭ ���� �ʾƼ� � ���� ��������� �� */
    result = Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}