#include <stdio.h>

void main()
{
	FILE *p_file = fopen("tipssoft.txt", "wt");  /* ���� ���� �ؽ�Ʈ ������ ���� */
	if (NULL != p_file) {                /* ���� ���⿡ ������ ��� */
		fprintf(p_file, "Hello\n");  /* ���Ͽ� ��Hello����� ���ڿ��� ���� �� �ٲ� �� */
		fclose(p_file);                 /* ������ �ݴ´� */
	}
}
