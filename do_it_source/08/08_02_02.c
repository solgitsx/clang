#include <stdio.h>

void main()
{
    int score = 92; /* ��ɹ�1-1 */
    char grade; /* ��ɹ�1-2 */
                /* score >= 90 �񱳿����� ���̱� ������ { } �� ���Ե�
                ��ɹ����� ��� �����մϴ�. */
    if (score >= 90) {
        grade = 'A'; /* ��ɹ�2 */
        printf("������ %d�̰� ����� %c �Դϴ�. \n", score, grade); ; /* ��ɹ�3 */
    }
    printf("�۾� ���� \n");  /* ��ɹ�4 */
}