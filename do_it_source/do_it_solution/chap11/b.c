#include <stdio.h>

int g_data1; // ������ �ƴ϶� ���������� �ν�

extern int g_data2;
// extern int g_data3;     // ���������� �����ϴ�.
extern int g_data4 = 0; // �Ϲ����� ����ó��
// extern int g_data5 = 0; // �̹� ���ǵǾ� �ֽ��ϴ�.
extern int g_data5;
// extern int s_data6; ����

int s_data6; // 0���� �ʱ�ȭ

void main()
{
    printf("g_data1 = %d\n", g_data1);
    printf("g_data2 = %d\n", g_data2);
    // printf("g_data3 = %d\n", g_data3);
    printf("g_data4 = %d\n", g_data4);
    printf("g_data5 = %d\n", g_data5);
    printf("s_data6 = %d\n", s_data6);

    printa();
}