#include <stdio.h>
#include <string.h>
 
void main()
{
    int data_length;  /* ���ڿ� ���̸� ������ ���� */
    char data[10] = { 'h', 'a', 'p', 'p', 'y', 0, };  /* ��happy�� ���ڿ��� ������ */
                                                      /* data ������ ����ִ� ���ڿ��� ���̸� ���Ѵ� */
    data_length = strlen(data);
    /* ���ڿ��� ����(������ ����)�� ����Ѵ�. */
    printf("data length = %d\n", data_length);
}
