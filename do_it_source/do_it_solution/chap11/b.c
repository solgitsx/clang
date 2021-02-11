#include <stdio.h>

int g_data1; // 오류가 아니라 전역변수로 인식

extern int g_data2;
// extern int g_data3;     // 전역변수가 없습니다.
extern int g_data4 = 0; // 일반전역 변수처리
// extern int g_data5 = 0; // 이미 정의되어 있습니다.
extern int g_data5;
// extern int s_data6; 오류

int s_data6; // 0으로 초기화

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