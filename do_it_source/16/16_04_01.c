#include <stdio.h> 
#define MAX_COUNT    5     /* �ִ� ���Ƚ���� 5ȸ�� ���� */
/* �ҽ��ڵ带 �ܼ�ȭ�ϱ� ���ؼ� �ִ��� ���� ó���� �����ϰڽ��ϴ� */
void main()
{
    int num[MAX_COUNT], count = 0, sum = 0, i;
    /* ����ڰ� �ִ� 5ȸ���� �Է��� ����, �߰��� 9999�� ������ ���� �� */
    while (count < MAX_COUNT) {
        printf("���ڸ� �Է��ϼ��� (9999�� ������ ����) : ");
        scanf("%d", num + count);  /* scanf("%d", &num[count]); �� ������ ǥ�� */
        if (num[count] == 9999) break;  /* 9999�� �������� �Է� �ߴ� */
        count++;  /* �Էµ� Ƚ�� ��� */
    }
    /* �Էµ� Ƚ����ŭ ���ڸ� ��� ���� */
    for (i = 0; i < count; i++) {
        if (i > 0) printf(" + ");   /* ���ڿ� ���� ���̿� + �� ��� �� */
        printf(" %d ", num[i]);  /* �Է��� ���� ��� */
        sum = sum + num[i];  /* �Է��� ���ڵ��� �ջ��� */
    }
    printf(" =  %d\n", sum);    /* �ջ� ���� ��� �� */
}