#include <stdio.h>

void main()
{
    int m;
    for (m = 5; m < 8; m++) {  /* m�� 5 ~ 7 ���� 3ȸ �ݺ� */
        if (m == 6) continue;    /* m�� 6�� �� continue�� �����Ѵ� */
        printf("m(%d)\n", m);
    }
}