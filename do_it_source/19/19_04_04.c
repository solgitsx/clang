#include <stdio.h>

void main()
{
    char temp[64];   /* ���Ͽ��� ���ڿ��� �Է� ���� �迭 ���� */
    FILE *p_file = fopen("tips.txt", "rt");  /* �б� ���� �ؽ�Ʈ ������ ���� */
    if (NULL != p_file) {  /* ���� ���⿡ ������ ��� */
        /* �ؽ�Ʈ ������ ���� EOF(End of File)���ڷ� �����ϴµ� fscanf �Լ���
           EOF ���ڸ� ������ EOF ���� ��ȯ���ش�. ���� EOF�� ��ȯ�� ������
           �ݺ��ϸ鼭 ���ڿ��� �о�� �ȴ�. (temp�� &temp[0]�� ����) */
        while (EOF != fscanf(p_file, "%s", temp)) {
            /* ���Ͽ��� ���� ���ڿ��� ȭ�鿡 ��� */
            printf("%s\n", temp);
        }
        fclose(p_file);   /* ������ �ݴ´� */
    }
}