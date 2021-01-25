#include <stdio.h>
#define MAX_COUNT        5   /* ģ�� ��� ������ �ִ� �� */

typedef struct People
{
    char name[14];            /* �̸� */
    unsigned short int age;    /* ���� */
    float height;              /* Ű */
    float weight;              /* ������ */
} Person;

/* ģ���� �߰��ϴ� �Լ� : �����ϸ� 1�� ��ȯ�ϰ� �����ϸ� 0�� ��ȯ �� 
   main �Լ����� friends �迭�� ���� �ּҸ� �����ͷ� �޾Ƽ� ���
   count�� ������� �Էµ� ģ���� ���� ����ϴ� ������ */
int AddFriend(Person *p_friend, int count)
{
    if(count < MAX_COUNT) {  /* �Է� ������ �ִ� ���� �Ѿ����� üũ */
        p_friend = p_friend + count; /* friends �迭�� count ��ġ�� �ּ� �̵� */
        printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
        printf("1. �̸� : ");
        scanf("%s", p_friend->name); /* ����ü�� name �׸� �Է� */
        printf("2. ���� : ");
        scanf("%hu", &p_friend->age); /* ����ü�� age �׸� �Է�*/
        printf("3. Ű : ");
        scanf("%f", &p_friend->height); /* ����ü�� height �׸� �Է� */
        printf("4. ������ : ");
        scanf("%f", &p_friend->weight); /* ����ü�� weight �׸� �Է� */
        printf("�Է��� �Ϸ��߽��ϴ�. \n\n");
        return 1;  /* ģ�� �߰� ���� */
    } else {
        /* �Է� ������ �ִ� ���� �Ѿ��� �� ���� ���� ��� */
        printf("�ִ� �ο��� �ʰ��Ͽ� �Է��� �� �� �����ϴ�. \n");
        printf("�ִ� %d������� ���� �����մϴ�. \n\n", MAX_COUNT);
    }
    return 0;  /* ģ�� �߰� ���� */
}

/* ��ϵ� ģ���� ����ϴ� �Լ�
   main �Լ����� friends �迭�� ���� �ּҸ� �����ͷ� �޾Ƽ� ���
   count�� ������� �Էµ� ģ���� ���� ����ϴ� ������ */
void ShowFriendList(Person *p_friend, int count)
{
    int i;
    if(count > 0) { /* ��ϵ� ģ���� ������ �� ����ŭ �ݺ��ϸ鼭 ģ�� ���� ��� */
        printf("\n��ϵ� ģ�� ���\n");
        printf("=======================================\n");
        for(i = 0; i < count; i++) {
            printf("%-14s, %3d, %6.2f, %6.2f\n", p_friend->name, p_friend->age,
            p_friend->height, p_friend->weight);
            p_friend++;  /* ���� ��ġ�� �ִ� ģ�� ������ �ּ� �̵� */
        }
        printf("=======================================\n\n");
    } else {  /* ��ϵ� ģ���� ������ ���� ���� ��� */
        printf("\n��ϵ� ģ���� �����ϴ�.\n\n");
    }
}

void main()
{
Person friends[MAX_COUNT];   /* ģ�� ������ ������ �迭 */
int count = 0, num;  /* count : ��ϵ� ģ�� ��  */

    while(1) { /* ���� ���� : ����ڰ� 3�� ������ break ������ ���� ��Ŵ */
        /* �޴��� ȭ�鿡 ��� */
        printf("     [ �޴� ]     \n");
        printf("==================\n");
        printf("1. ģ�� �߰�      \n");
        printf("2. ģ�� ��� ���� \n");
        printf("3. ����           \n");
        printf("==================\n");
        printf("��ȣ ���� : ");
        scanf("%d", &num);  /* ����ڿ��� ��ȣ�� �Է� ���� */

        if(num == 1) {  /* 1�� : ģ�� �߰��� ������ ��� */
            /* AddFriend �Լ��� 1�� ��ȯ�ϸ� ���������� �߰��� ��� 
              �׷��� 1�� ��ȯ���� ���� ��ϵ� ģ�� �� ������Ŵ 
               friends �迭�� �ּҸ� ���ڷ� �Ѱ� �� */
            if(1 == AddFriend(friends, count)) count++;
        } else if(num == 2) { /* 2�� : ģ�� ��� ���⸦ ������ ��� */
            /* friends �迭�� �ּҸ� ���ڷ� �Ѱ� �� */
            ShowFriendList(friends, count);
        } else if(num == 3){ /* 3�� : �ݺ����� �������� ���� �� */
            break;
        } else {
            /* ��ȣ�� ��ȿ���� �ʴ� ��쿡 ���� ��� */
            printf("1~3 ��ȣ�� ������ �� �ֽ��ϴ�!!\n\n");
        }
    }
}
