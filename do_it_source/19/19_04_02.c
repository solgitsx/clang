#include <stdio.h>

void main()
{
	int num1, num2, num3;
	FILE *p_file = fopen("tipssoft.txt", "rt");  /* �б� ���� �ؽ�Ʈ ������ ���� */
	if (NULL != p_file) {                /* ���� ���⿡ ������ ��� */
										 /* num1�� 412, num2�� 100 �׸��� num3�� 123�� ���� */
		fscanf(p_file, "%d %d %d", &num1, &num2, &num3);
			/* ���Ͽ��� ���� ���� ȭ�鿡 ��� */
		printf("%d %d %d\n", num1, num2, num3);
		fclose(p_file);                 /* ������ �ݴ´� */
	}
}
