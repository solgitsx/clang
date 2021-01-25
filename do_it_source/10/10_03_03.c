#include <stdio.h>
/* dest_data ������ bit_num ��° ��Ʈ ���� ��ȯ�ϴ� �Լ��̴�. */
unsigned char GetBit(unsigned char dest_data, unsigned char bit_num)
{
    unsigned char bit_state = 0;
    /* 1 ����Ʈ ������ ��Ʈ�̵��� 0 ~ 7���� �����ϴ� */
    if (bit_num < 8) {
        bit_state = dest_data & (0x01 << bit_num);
        bit_state = bit_state >> bit_num;
    }
    /* bit_num�� ������ ��Ʈ ���� ��ȯ */
    return bit_state;
}

void main()
{
    unsigned char lamp_state = 0x75;   /* 0x7F �� 0111 0101 */
    unsigned char bit_state;
    int i;

    printf("%X -> ", lamp_state);  /* 16�������� ���� �� ��� */
                                   /* 8���� ��Ʈ ���� ��� ����ϱ� ���� 8�� �ݺ� */
    for (i = 0; i < 8; i++) {
        /* ��Ʈ�� ǥ���� �� �ֻ��� ��Ʈ(7�� ��Ʈ)���� ����������
        �����ֱ� ���ؼ� 7, 6, 5, �� ������ ��Ʈ ���� ��´� */
        bit_state = GetBit(lamp_state, 7 - i);
        /* ��Ʈ ���� ��� */
        printf("%d", bit_state);
    }
    /* ��Ʈ ���� ��� ��µǸ� �� �ٲ��� �Ѵ�. */
    printf("\n");
}