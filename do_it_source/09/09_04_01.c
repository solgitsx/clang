#include <stdio.h>

void main()
{
    int m, n;
    for (m = 5; m < 7; m++) {  /* m�� 5 ~ 6 ���� 2ȸ �ݺ� */
        for (n = 0; n < 3; n++) {  /* n�� 0 ~ 2 ���� 3ȸ �ݺ� */
            printf("m(%d) - n(%d)\n", m, n);
        }
    }
}