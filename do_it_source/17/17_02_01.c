#include <stdio.h>

void main()
{
    short data = 3;
    short *p = &data; /* data ������ �ּҸ� 1���� ������ p�� ���� */
    short **pp = &p;  /* 1���� ������ p������ �ּҸ� 2���� ������ pp�� ���� */

    printf("[Before  ] data : %d\n", data); /* 3 ��� */
    *p = 4;     /* 1���� ������ p�� ����Ͽ� data �������� 4�� ���� */
    printf("[Use *p  ] data : %d\n", data);
    **pp = 5;   /* 2���� ������ pp�� ����Ͽ� data �������� 5�� ���� */
    printf("[Use **pp] data : %d\n", data);
}