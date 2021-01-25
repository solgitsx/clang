#include <stdio.h>
#define MAX_COUNT        5   /* ģ�� ��� ������ �ִ� �� */

/* ����� �̸��� �������� �ִ� 13�ڱ��� ���� (���� \0�� ���� 13 + 1 = 14)
  �̸��� ���ڿ� �����̱� ������ �̹� 1���� �迭 ������. �׷��� MAX_COUNT 
  ��ŭ �����͸� �����Ϸ��� �Ʒ��� ���� 2���� �迭�� �����ؼ� ����ؾ� ��
    char name[MAX_COUNT][14];
  name �迭�� �ٸ� �Լ����� �����ͷ� �������� �Ʒ��� ���� ������ �����͸� 
  ����ؾ� ��
    char (*p_name)[14];
  �̷� ������ �����͸� ����� �ϴ� ������� ���Ƽ� typedef �� ����Ͽ�
  �̸��� ���� ������ ��(NAME_TYPE)�� �Ʒ��� ���� ����� ǥ���� �ܼ�ȭ��Ŵ
    char name[MAX_COUNT][14];�� NAME_TYPE name[MAX_COUNT];�� ����
    char (*p_name)[14];�� NAME_TYPE *p_name���� ���� �� */
typedef char NAME_TYPE[14];

/* ģ���� �߰��ϴ� �Լ� : �����ϸ� 1�� ��ȯ�ϰ� �����ϸ� 0�� ��ȯ �� 
  main �Լ����� ����� name, age, height, weight �迭�� ���� �ּҸ� �����ͷ� 
  �޾Ƽ� ���.  count�� ������� �Էµ� ģ���� ���� ����ϴ� ������ */
int AddFriend(NAME_TYPE *p_name, unsigned short int *p_age, 
                float *p_height, float *p_weight, int count)
{
    if(count < MAX_COUNT) {  /* �Է� ������ �ִ� ���� �Ѿ����� üũ */
        printf("\n���ο� ģ�� ������ �Է��ϼ���\n");
        printf("1. �̸� : ");
        scanf("%s", *(p_name + count)); /* name �迭�� count ��ġ�� �̸� �Է� */
        printf("2. ���� : ");
        scanf("%hu", p_age + count); /* age �迭�� count ��ġ�� ���� �Է� */
        printf("3. Ű : ");
        scanf("%f", p_height + count); /* height �迭�� count ��ġ�� Ű �Է� */
        printf("4. ������ : ");
        scanf("%f", p_weight + count); /* weight �迭�� count ��ġ�� ������ �Է� */
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
  main �Լ����� ����� name, age, height, weight �迭�� ���� �ּҸ� �����ͷ�
  �޾Ƽ� ���. count�� ������� �Էµ� ģ���� ���� ����ϴ� ������ */
void ShowFriendList(NAME_TYPE *p_name, unsigned short int *p_age, 
                    float *p_height, float *p_weight, int count)
{
    int i;
    if(count > 0) { /* ��ϵ� ģ���� ������ �� ����ŭ �ݺ��ϸ鼭 ģ�� ���� ��� */
        printf("\n��ϵ� ģ�� ���\n");
        printf("=======================================\n");
        for(i = 0; i < count; i++) {
            printf("%-14s, %3d, %6.2f, %6.2f\n", *(p_name + i), *(p_age + i),
                             *(p_height + i), *(p_weight + i));
        }
        printf("=======================================\n\n");
    } else {  /* ��ϵ� ģ���� ������ ���� ���� ��� */
        printf("\n��ϵ� ģ���� �����ϴ�.\n\n");
    }
}

void main()
{
    NAME_TYPE name[MAX_COUNT];     /* ģ�� �̸��� ������ �迭 */
    unsigned short int age[MAX_COUNT]; /* ģ�� ���̸� ������ �迭 */
    float height[MAX_COUNT];           /* ģ�� Ű�� ������ �迭 */
    float weight[MAX_COUNT];           /* ģ�� �����Ը� ������ �迭 */
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
              �̸�, ����, Ű, ������ �迭�� �ּҸ� ���ڷ� �Ѱ� �� */
            if(1 == AddFriend(name, age, height, weight, count)) count++;
        } else if(num == 2) { /* 2�� : ģ�� ��� ���⸦ ������ ��� */
            /* �̸�, ����, Ű, ������ �迭�� �ּҸ� ���ڷ� �Ѱ� �� */
            ShowFriendList(name, age, height, weight, count);
} else if(num == 3){ /* 3�� : �ݺ����� �������� ���� �� */
break;
        } else {
            /* ��ȣ�� ��ȿ���� �ʴ� ��쿡 ���� ��� */
            printf("1~3 ��ȣ�� ������ �� �ֽ��ϴ�!!\n\n");
        }
    }
}