#include <stdio.h>
/* dest_data ������ bit_num ��° �ִ� ��Ʈ�� 0���� �����ϴ�
�Լ��̴�. �� �Լ��� �ش��Ʈ�� 0���� ������ ���� ��ȯ�Ѵ�. */
unsigned char ModifyBit(unsigned char dest_data, unsigned char bit_num, char value)
{
    unsigned char mask;
    /* 1 ����Ʈ ������ ��Ʈ�̵��� 0 ~ 7���� �����ϴ� */
    if (bit_num < 8) {
        /* bit_num ��° ��Ʈ�� ���� �����ϴµ� ����� ���ڸ� �����Ѵ�. */
        mask = 0x01 << bit_num;
        if (value == 1) dest_data = dest_data | mask;  /* 1�� �����ϴ� ��� */
        else dest_data = dest_data & ~mask;  /* 0���� �����ϴ� ��� */
    }
    /*����� ���� ��ȯ */
    return dest_data;
}

void main()
{
    unsigned char lamp_state = 0x7F;   /* 0x7F �� 0111 1111 */
    printf("%X->", lamp_state);        /* ���� �� �� ��� */
                                       /* lamp_state ������ 3��° ��Ʈ�� 0���� ���� */
    lamp_state = ModifyBit(lamp_state, 3, 0);  /* 0x77 �� 0111 0111 */
    printf("%X->", lamp_state);  /* ���� �� �� ��� */
                                 /* lamp_state ������ 3��° ��Ʈ�� 1���� ���� */
    lamp_state = ModifyBit(lamp_state, 3, 1);  /* 0x7F �� 0111 1111 */
    printf("%X\n", lamp_state);  /* ���� �� �� ��� */
}