#include <stdio.h>
/* �Ű����� data�� [ ]�� ���ڸ� ���� �ʾƵ� �ȴ�. ������ ���޵Ǵ� �迭��
ũ�⿡ ������ �ޱ� ������ ���⿡ � ���ڸ� ��� ���� �ȴ�. */
int GetStringLength(char data[])
{
    int count = 0;
    /* 0�� ���� ������ ������ ������ ���Ѵ� */
    while (data[count]) count++;  /* while(data[count] != 0) count++; �� ���� */
                                  /* ���ڿ��� ���̸� ��ȯ�Ѵ� */
    return count;
}

void main()
{
    int data_length;  /* ���ڿ� ���̸� ������ ���� */
    char data[10] = { 'h', 'a', 'p', 'p', 'y', 0, };  /* ��happy�� ���ڿ��� ������ */
                                                      /* data ������ ����ִ� ���ڿ��� ���̸� ���Ѵ� */
    data_length = GetStringLength(data);
    /* ���ڿ��� ����(������ ����)�� ����Ѵ�. */
    printf("data length = %d\n", data_length);
}