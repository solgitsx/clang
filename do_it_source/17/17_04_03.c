#include <stdio.h>
#include <malloc.h>

void main()
{
    /* ���ɺ� �ο����� ������ ������ - ����ڿ��� �Է� ���� */
    unsigned char *p_limit_table;
    /* ���ɺ� ���� ����Ű�� Ƚ���� ������ 2���� ������ */
    unsigned char **p;
    int age, age_step, member, temp, sum;

    printf("20����� �����ؼ� �������� ��ΰ��� : ");
    scanf("%d", &age_step);
    /* �ηɺ� �ο����� ������ �޸𸮸� �����Ѵ� */
    p_limit_table = (unsigned char *)malloc(age_step);
    p = (unsigned char *)malloc(sizeof(unsigned char *) * age_step);
    /* ���ɺ��� ���� ����Ű�� Ƚ���� �Է� �޴´� */
    for (age = 0; age < age_step; age++) {
        /* '20�� ������ ���� ����Ű�� Ƚ��'��� ����ϱ� ���ؼ� */
        printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
        printf("�� ���ɴ�� �� ���Դϱ�? : ");
        /* �ش� ���ɿ� �Ҽӵ� ������� �Է� �޴´�. 
           scanf�� unsigned char ������ ���� ������ ������ ��� temp ������ 
           ������ �Է� �����Ŀ� p_limit_table �� ����Ű�� �޸𸮿� �־��ش�.
        */
        scanf("%d", &temp);
        *(p_limit_table + age) = (unsigned char)temp;
        /* �Է� ���� �ο��� ��ŭ �޸𸮸� �Ҵ� �Ѵ� */
        *(p + age) = (unsigned char *)malloc(*(p_limit_table + age));
        /* �ش� ���ɿ� �Ҽӵ� ������� ������� �Է� �޴´�. */
        for (member = 0; member < *(p_limit_table + age); member++) {
            /* 1th : , 2th : , ... ��� ����ϱ� ���ؼ� */
            printf("%dth : ", member + 1);
            /* ���� ����Ű�� Ƚ���� ������ �Է¹޴´�. 
            scanf�� unsigned char ������ ���� ������ ������ ��� temp ������ 
            ������ �Է� �����Ŀ� p�� ����Ű�� �޸𸮿� �־��ش�. */
            scanf("%d", &temp);         
            *(*(p + age) + member) = (unsigned char)temp;
        }
    }

    printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");
    /* ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��� ���� ����Ѵ� */
    for (age = 0; age < age_step; age++) {
        sum = 0;
        /* 20�� : , 30�� : , 40�� : ��� ����ϱ� ���ؼ� */
        printf("%d0�� : ", age + 2);
        /* �ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ��Ѵ�. */
        for (member = 0; member < *(p_limit_table + age); member++) {
            sum = sum + *(*(p + age) + member);
        }
        /* �ջ갪�� �ο����� ����� ����� ����.*/
        printf("%5.2f\n", (double)sum / *(p_limit_table + age));
        /* �� ���ɿ� �Ҵ��ߴ� ���� �޸𸮸� �����Ѵ�. */ 
        free(*(p + age));
    }
    /* ���� ����Ű�� Ƚ���� �����ϱ� ���ؼ� �����ߴ� �޸𸮸� �����Ѵ�. */
    free(p);
    /* ���ɺ� �ο����� ����ϱ� ���ؼ� ����ߴ� �޸𸮸� �����Ѵ�. */
    free(p_limit_table);
}