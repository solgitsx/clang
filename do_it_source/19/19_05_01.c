#include <stdio.h>

void main()
{
    int data = 0x00000412;
    FILE *p_file = fopen("jin.dat", "wb");  /* ���� ���� ���̳ʸ� ������ ���� */
    if (NULL != p_file) {    /* ���� ���⿡ ������ ��� */
        /* data�� �����ּҺ��� 4����Ʈ ũ�⸸ŭ 1���� ����(p_file)�� ���� */
        fwrite(&data, sizeof(int), 1, p_file);
        fclose(p_file);  /* ������ �ݴ´� */
    }
}