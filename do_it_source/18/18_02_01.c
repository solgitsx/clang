#include <stdio.h>
/* People ����ü�� �����ϸ鼭 typedef ������ ����Ͽ� 
   Person ������������ �����Ǳ��� ���� �� */
typedef struct People
{
    char name[12];
    unsigned short int age;
    float height;
    float weight;
} Person;

void main()
{
    Person data;   

    printf("������� ������ �Է��ϼ���\n");
    printf("�̸� : ");
    scanf("%s", data.name);
    printf("���� : ");
    /* %u��� ������ unsigned int ������ ó���Ǳ� ������ 
       unsigned short int ������ �Է� �������� %hu ��� */
    scanf("%hu", &data.age);  
    printf("Ű : ");
    scanf("%f", &data.height);
    printf("������ : ");
    scanf("%f", &data.weight);

    printf("\n�Է��� ������ ������ �����ϴ�.\n");
    /* Ű�� �����Դ� �Ҽ��� ù°�ڸ������� �����ֱ� ���ؼ�
       %.1f �������� ����� */
    printf("%s : %d��, %.1fcm, %.1fkg\n", data.name, data.age, data.height, data.weight);
}