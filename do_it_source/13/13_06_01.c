#include <stdio.h>
int GetData(void *p_data, char type)
{
    int result = 0;
    /* type ������ ����� ���� �������� ĳ������ �ٸ��� �� */
    if (type == 1) result = *(char *)p_data;         /* 0x78�� ����� */
    else if (type == 2) result = *(short *)p_data;    /* 0x5678�� ����� */
    else if (type == 4) result = *(int *)p_data;      /* 0x12345678�� ����� */
    return result;
}

void main()
{
    int data = 0x12345678;
    /* data �������� 2����Ʈ ũ�⸸ ����� */
    printf("%X\n", GetData(&data, 2));
}