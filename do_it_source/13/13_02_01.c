#include <stdio.h>

void main()
{
    short birthday;
    short *ptr;
    ptr = &birthday;   /* birthday ������ �ּҸ� ptr ������ ���� */

    /* %p ������ �޸��� �ּҸ� 16���� �������� ����մϴ�. */
    printf("birthday ������ �ּҴ� %p  �Դϴ�.\n", ptr);
}