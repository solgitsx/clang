#include <stdio.h>

void main()
{
    int data;
    FILE *p_file = fopen("jin.dat", "rb");  /* �б� ���� ���̳ʸ� ������ ���� */
    if (NULL != p_file) {  /* ���� ���⿡ ������ ��� */
        /* �б���� ���� ������ ó����ġ���� �����͸� ���� �� �ִ�.
        ������ ù 4����Ʈ(int)��ŭ �о data�� ���� �ּҿ� ���� */
        fread(&data, sizeof(int), 1, p_file);
        fclose(p_file);  /* ������ �ݴ´� */
	printf("file data : %d(0x%04x)\n", data,data);  /* ���Ͽ��� ���� ���� ����Ѵ�. */
    }
}