#include <stdio.h>
int  result;   /* ������������ ����, Ư���� �ʱ�ȭ ���� ������ 0���� �ʱ�ȭ�� */

void Sum(int data1, int data2)
{
    int  result;   /* ������������ ����, �ʱ�ȭ �ȵ� */
    result = data1 + data2;
    /*���� ������ �켱������ ���� ������ ������ ���� ���� ���� result�� �ƴ� �������� 
	result�� ����*/
}

void main()
{
    Sum(5, 3);
    printf("5 + 3 = %d\n", result);
}