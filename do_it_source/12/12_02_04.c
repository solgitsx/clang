#include <stdio.h>
#include <string.h>   /* ���ڿ� ǥ�� �Լ��� ����ϱ� ���� */

void main()
{
    char data[10] = { 'a', 'b', 'c', 0, };  /* ��abc�� ���ڿ��� ������ */
    char result[16];             /* ���ο� ���ڿ��� ������ ���� */

    strcpy(result, data);   /* data�� ����� ���ڿ��� result�� ���� */
    strcat(result, "def");   /* result�� ��def���� ������ */

    printf("%s + \"def\" = %s\n", data, result);
}