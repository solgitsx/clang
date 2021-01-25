#include <stdio.h>
/* dest_data ������ bit_num ��° �ִ� ��Ʈ�� 1�� �����ϴ�
�Լ��̴�. �� �Լ��� �ش��Ʈ�� 1�� ������ ���� ��ȯ�Ѵ�. */
unsigned char SetBit(unsigned char dest_data, unsigned char bit_num)
{
    /* 1 ����Ʈ ������ ��Ʈ�̵��� 0 ~ 7���� �����ϴ� */
    if (bit_num < 8) dest_data = dest_data | (0x01 << bit_num);
    /*����� ���� ��ȯ */
    return dest_data;
}

void main()
{
    unsigned char lamp_state = 0x77;   /* 0x77 �� 0111 0111 */
    printf("%X->", lamp_state);        /* ���� �� �� ��� */
                                       /* lamp_state ������ 3��° ��Ʈ�� 1�� ���� */
    lamp_state = SetBit(lamp_state, 3);  /* 0x7F �� 0111 1111 */
    printf("%X\n", lamp_state);   /* ���� �� �� ��� */
}