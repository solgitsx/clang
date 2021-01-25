#include <stdio.h>

void main()
{
    char temp[64];   /* ���Ͽ��� ���ڿ��� �Է� ���� �迭 ���� */
    FILE *p_file = fopen("tips.txt", "rt");  /* �б� ���� �ؽ�Ʈ ������ ���� */
    if (NULL != p_file) { /* ���� ���⿡ ������ ��� */
        /* �ؽ�Ʈ ������ ���� EOF(End of File)���ڷ� �����ϴµ� fgets �Լ���
            EOF ���ڸ� ������ NULL ���� ��ȯ���ش�. ���� NULL�� ��ȯ�� ������
            �ݺ��ϸ鼭 ���ڿ��� �о�� �ȴ�. fgets �Լ��� �� ��° ���ڴ�
            ù ��° ���ڿ� ���Ǵ� �޸��� ũ�⸦ ����Ѵ� */
        while (NULL != fgets(temp, sizeof(temp), p_file)) {
            /* ���Ͽ��� ���� ���ڿ��� ȭ�鿡 ����Ѵ�. fgets �Լ��� fscanf �Լ���
            �޸� ���� ���� �ִ� \n�� �о temp �迭�� �������� �־��ֱ�
            ������ printf �Լ��� ����� �� \n�� ������ �ʴ´� */
            printf("%s", temp);
        }
        fclose(p_file);  /* ������ �ݴ´� */
    }
}