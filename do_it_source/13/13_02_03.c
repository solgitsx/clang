#include <stdio.h>
/*temp ������ �̿��Ͽ� a�� b���� ���� �ٲٴ� �Լ� */
void Swap(int a,int b)
{
	int temp = a;	/* a = 96, b = 5*/
	a = b;		/* a = 4, b = 5*/
	b = temp;	/* a = 5, b = 96*/
}

void main()
{
	int start = 96, end = 5;

	printf("before : start = %d, end = %d\n", start, end);
	if(start > end){
		Swap(start,end);
	}
	printf("after : start, end %d\n",start_end);
}