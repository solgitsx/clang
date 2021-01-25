#include <stdio.h>
#include <malloc.h>    /* malloc, free �Լ��� ����ϱ� ���ؼ� */
/* �ҽ��ڵ带 �ܼ�ȭ�ϱ� ���ؼ� �ִ��� ���� ó���� �����ϰڽ��ϴ� */
typedef struct node  /* �� �׷��� ���� ����Ʈ������ �����(node)����� �� */
{
	int number;            /* ���� ���� ������ ���� */
	struct node *p_next;    /* ���� ��带 ����ų ������ */
} NODE;

/* ��尡 ���� ��� �� �Լ��� ���޵� p_head, p_tail ���� �����ؾ� �ϱ� ������
AddNumber�� ȣ���� �� p_head, p_tail ������ ������ �ּ� ���� �Ѱ���. ����
1���� �������� �ּҸ� �޾Ƽ� ����ؾ� �ϱ� ������ 2���� �����͸� ��� �� */
void AddNumber(NODE **pp_head, NODE **pp_tail, int data)
{
	/* *pp_head ��� ����ϸ� AddNumber�� ȣ���� �� ����� p_head �����Ϳ�
	����� �ּҸ� �ǹ� ��. �� ���� NULL�̸� ��尡 ���ٴ� ���� */
	if (NULL != *pp_head) {
		/* *pp_tail ��� ����ϸ� AddNumber�� ȣ���� �� ����� p_tail �����Ϳ�
		����� �ּҸ� �ǹ� ��. �� �ּҴ� ������ ����� �ּ��� */
		(*pp_tail)->p_next = (NODE *)malloc(sizeof(NODE)); /* �� ��� �Ҵ� */
		*pp_tail = (*pp_tail)->p_next;  /* p_tail(*pp_tail)�� �� ��� �ּҸ� ���� */
	}
	else {
		/* p_head�� NULL�̶� ù ��尡 �߰� ��. p_head ���� ���� ���� */
		*pp_head = (NODE *)malloc(sizeof(NODE)); /* �� ��� �Ҵ� */
		*pp_tail = *pp_head;  /* �� ����� �ּҸ� p_tail(*pp_tail)�� ���� */
	}

	(*pp_tail)->number = data;     /* �� ����� number�� data ���� ���� */
	(*pp_tail)->p_next = NULL;     /* ���� ��尡 ������ ��� */
}

void main()
{
	/* ����� ���۰� ���� ����� ������ */
	NODE *p_head = NULL, *p_tail = NULL, *p;
	int sum = 0, temp;

	while (1) {  /* ���ѷ��� : �߰��� 9999�� ������ ���� �� */
		printf("���ڸ� �Է��ϼ��� (9999�� ������ ����) : ");
		scanf("%d", &temp);
		if (9999 == temp) break;  /* 9999�� �������� �Է� �ߴ� */
								  /* ����� ���۰� ���� ����ϴ� �������� �ּҿ� �Էµ� ���ڸ� ���� */
		AddNumber(&p_head, &p_tail, temp);
	}

	/* �Էµ� ���ڸ� ����ϱ� ���ؼ� ��带 Ž���� �����Ϳ� ���� ����� �ּҸ�
	���� p_head�� ���� ����ϸ� ���� ����� ��ġ�� �Ҿ���� */
	p = p_head;
	while (NULL != p) {
		if (p != p_head) printf(" + ");   /* ���ڿ� ���� ���̿� + �� ��� �� */
		printf(" %d ", p->number);    /* �Է��� ���� ��� */
		sum = sum + p->number;    /* �Է��� ���ڵ��� �ջ��� */
		p = p->p_next;               /* ���� ���� �̵� */
	}
	printf(" = %d\n", sum);    /* �ջ� ���� ��� �� */

							   /* ����ߴ� ��� ��带 ����. p_head�� NULL�� ���� ���̱� ������
							   Ž���� p_head�� �״�� �̿� �� */
	while (NULL != p_head) {   /* p_head�� NULL�� �� ������ �ݺ� */
		p = p_head;   /* ���� ��带 �����ϱ� ���� p ������ ��� �ּ� ���� */
		p_head = p_head->p_next;  /* ���� ��ġ�� ���� ���� �ű� */
		free(p);                    /* ����ߴ� �ּҸ� ����Ͽ� ��� ���� */
	}
	p_tail = p_head; /* �ݺ����� ������ p_head�� NULL��. p_tail�� NULL�� ���� */
}
