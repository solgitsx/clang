#include <stdio.h>
#include <malloc.h> /* malloc, free �Լ��� ����ϱ� ���ؼ� */

void main()
{
    char *p_name;
    p_name = (char *)malloc(32); /* 32 ����Ʈ�� �޸𸮸� �����Ҵ� �� */
    if (p_name != NULL){ 
        /* �޸� �Ҵ翡 ������ ��� */ 
        printf("Your name : ");
        gets(p_name);  /* �̸��� �Է� ���� */

        printf("Hi~ %s\n", p_name);  /* �Է� ���� �̸��� ���. */
        free(p_name);   /* ���� �Ҵ�� �޸𸮸� ���� */
    }
    else {
        /* �޸� �Ҵ翡 ������ ��� */
        printf("Memory allocation error!!");
    }
}
