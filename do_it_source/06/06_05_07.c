#include <stdio.h>

void main()
{
    int data1 = 10;      /*10���� -> 10������ 10*/
    int data2 = 010;     /*8����  -> 10������ 8*/
    int data3 = 0x10;    /*16���� -> 10������ 16*/
                         /*data1�� 16����, data2�� 10����, data3�� 8������ ���*/
    printf("%x, %d, %o", data1, data2, data3);
}