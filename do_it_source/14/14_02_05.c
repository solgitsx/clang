#include <stdio.h>

void main()
{
    char input_string[10];
    /*��ȯ���� NULL�� �ƴ϶� ���ڿ��� �Է� �޾Ƽ� input_string�� ������*/
    if (NULL != gets(input_string){
	printf("inpust : %s\n",input_string);
    } else {
	printf("input - > Canceled\n");
	}

}