#include <stdio.h>

void main()
{
    /* ���ɺ� �ο���. 20�� 4��, 30�� 2��, 40�� 3��*/
    unsigned char limit_table[3] = { 4, 2, 3 };
    /* ���ɺ� ���� ����Ű�� Ƚ���� ������ �迭 */
    unsigned char count[3][4];
    int age, member, temp, sum;
    /* ���ɺ��� ���� ����Ű�� Ƚ���� �Է� �޴´� */
    for (age = 0; age < 3; age++) {
        /* '20�� ������ ���� ����Ű�� Ƚ��'��� ����ϱ� ���ؼ� */
        printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
        /* �ش� ���ɿ� �Ҽӵ� ������� ������� �Է� �޴´�. */
        for (member = 0; member < limit_table[age]; member++) {
            /* 1th : , 2th : , ... ��� ����ϱ� ���ؼ� */
            printf("%dth : ", member + 1);
            /* ���� ����Ű�� Ƚ���� ������ �Է¹޴´�. 
            scanf�� unsigned char ������ ���� ������ ������ ���
            temp ������ ������ �Է� �����Ŀ� count �迭�� �־��ش�. */
            scanf("%d", &temp);         
            count[age][member] = (unsigned char)temp;
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
            sum = sum + count[age][member];
        }
        /* �ջ갪�� �ο����� ����� ����� ����.*/
        printf("%5.2f\n", (double)sum / limit_table[age]);
    }   
}