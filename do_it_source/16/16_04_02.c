#include <stdio.h>
#include <malloc.h>    /* malloc, free �Լ��� ����ϱ� ���ؼ� */
/* �ҽ��ڵ带 �ܼ�ȭ�ϱ� ���ؼ� �ִ��� ���� ó���� �����ϰڽ��ϴ� */
void main()
{
    int *p_num_list, count = 0, sum = 0, limit = 0, i;

    printf("����� �ִ� ������ �Է��ϼ��� : ");
    scanf("%d", &limit);
    /* ����ڰ� �Է��� ������ŭ ������ ������ �� �ִ� �޸𸮸� �Ҵ� */
    p_num_list = (int *)malloc(sizeof(int)*limit);
    /* ����ڰ� �ִ� 5ȸ���� �Է��� ����, �߰��� 9999�� ������ ���� �� */
    while (count < limit) {
        printf("���ڸ� �Է��ϼ��� (9999�� ������ ����) : ");
        scanf("%d", p_num_list + count);
        if (*(p_num_list + count) == 9999) break;  /* 9999�� �������� �Է� �ߴ� */
        count++;  /* �Էµ� Ƚ�� ��� */
    }
    /* �Էµ� Ƚ����ŭ ���ڸ� ��� ���� */
    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");   /* ���ڿ� ���� ���̿� + �� ��� �� */
        printf(" %d ", *(p_num_list + i));  /* �Է��� ���� ��� */
        sum = sum + *(p_num_list + i);  /* �Է��� ���ڵ��� �ջ��� */
    }
    printf(" = %d\n", sum);    /* �ջ� ���� ��� �� */
    free(p_num_list);          /* ����ߴ� �޸𸮸� ���� */
}