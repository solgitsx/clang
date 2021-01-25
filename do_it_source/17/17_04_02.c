#include <stdio.h>
#include <malloc.h>

void main()
{
    /* ���ɺ� �ο����� ������ �迭 - ����ڿ��� �Է� ���� */
    unsigned char limit_table[3];
    /* ���ɺ� ���� ����Ű�� Ƚ���� ������ �迭 */
    unsigned char *p[3];
    int age, member, temp, sum;
    /* ���ɺ��� ���� ����Ű�� Ƚ���� �Է� �޴´� */
    for (age = 0; age < 3; age++) {
        /* '20�� ������ ���� ����Ű�� Ƚ��'��� ����ϱ� ���ؼ� */
        printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
        printf("�� ���ɴ�� �� ���Դϱ�? : ");
        /* �ش� ���ɿ� �Ҽӵ� ������� �Է� �޴´�. 
           scanf�� unsigned char ������ ���� ������ ������ ���
           temp ������ ������ �Է� �����Ŀ� limit_table �迭�� �־��ش�.
        */
        scanf("%d", &temp);
        limit_table[age] = (unsigned char)temp;
        /* �Է� ���� �ο��� ��ŭ �޸𸮸� �Ҵ� �Ѵ� */
        p[age] = (unsigned char *)malloc(limit_table[age]);
        /* �ش� ���ɿ� �Ҽӵ� ������� ������� �Է� �޴´�. */
        for (member = 0; member < limit_table[age]; member++) {
            /* 1th : , 2th : , ... ��� ����ϱ� ���ؼ� */
            printf("%dth : ", member + 1);
            /* ���� ����Ű�� Ƚ���� ������ �Է¹޴´�. 
            scanf�� unsigned char ������ ���� ������ ������ ���
            temp ������ ������ �Է� �����Ŀ� p �迭�� �־��ش�. */
            scanf("%d", &temp);         
            *(p[age] + member) = (unsigned char)temp;
        }
    }

    printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
    /* ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��� ���� ����Ѵ� */
    for (age = 0; age < 3; age++) {
        sum = 0;
        /* 20�� : , 30�� : , 40�� : ��� ����ϱ� ���ؼ� */
        printf("%d0�� : ", age + 2);
        /* �ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ��Ѵ�. */
        for (member = 0; member < limit_table[age]; member++) {
            sum = sum + *(p[age] + member);
        }
        /* �ջ갪�� �ο����� ����� ����� ����.*/
        printf("%5.2f\n", (double)sum / limit_table[age]);
        /* �� ���ɿ� �Ҵ��ߴ� ���� �޸𸮸� �����Ѵ�. */ 
        free(p[age]);
    }   
}