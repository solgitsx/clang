#include <stdio.h>

void main()
{
    int file_size = 0;
    FILE *p_file = fopen("tipssoft.dat", "rb");  /* �б� ���� ���̳ʸ� ������ ���� */
    if (NULL != p_file) {  /* ���� ���⿡ ������ ��� */
        fseek(p_file, 0, SEEK_END);  /* ������ ������ �̵��Ѵ� */
        file_size = ftell(p_file);      /* ���� ���� ��ġ�� ��´�. ������ ũ�⸦ ���� */
        printf("���� ũ�� : %d\n", file_size);
        fclose(p_file);  /* ������ �ݴ´� */
    }
}