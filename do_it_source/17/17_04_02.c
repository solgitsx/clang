#include <stdio.h>
#include <malloc.h>

void main()
{
    /* 연령별 인원수를 저장할 배열 - 사용자에게 입력 받음 */
    unsigned char limit_table[3];
    /* 연령별 윗몸 일으키기 횟수를 저장할 배열 */
    unsigned char *p[3];
    int age, member, temp, sum;
    /* 연령별로 윗몸 일으키기 횟수를 입력 받는다 */
    for (age = 0; age < 3; age++) {
        /* '20대 연력의 윗몸 일으키기 횟수'라고 출력하기 위해서 */
        printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);
        printf("이 연령대는 몇 명입니까? : ");
        /* 해당 연령에 소속된 사람수를 입력 받는다. 
           scanf로 unsigned char 변수에 직접 정수를 받을수 없어서
           temp 변수에 정수로 입력 받은후에 limit_table 배열에 넣어준다.
        */
        scanf("%d", &temp);
        limit_table[age] = (unsigned char)temp;
        /* 입력 받은 인원수 만큼 메모리를 할당 한다 */
        p[age] = (unsigned char *)malloc(limit_table[age]);
        /* 해당 연령에 소속된 사람들을 순서대로 입력 받는다. */
        for (member = 0; member < limit_table[age]; member++) {
            /* 1th : , 2th : , ... 라고 출력하기 위해서 */
            printf("%dth : ", member + 1);
            /* 윗몸 일으키기 횟수를 정수로 입력받는다. 
            scanf로 unsigned char 변수에 직접 정수를 받을수 없어서
            temp 변수에 정수로 입력 받은후에 p 배열에 넣어준다. */
            scanf("%d", &temp);         
            *(p[age] + member) = (unsigned char)temp;
        }
    }

    printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");
    /* 연령별로 입력된 횟수를 합산하여 평균 값을 출력한다 */
    for (age = 0; age < 3; age++) {
        sum = 0;
        /* 20대 : , 30대 : , 40대 : 라고 출력하기 위해서 */
        printf("%d0대 : ", age + 2);
        /* 해당 연령에 소속된 사람들의 횟수를 합산한다. */
        for (member = 0; member < limit_table[age]; member++) {
            sum = sum + *(p[age] + member);
        }
        /* 합산값을 인원수로 나누어서 평균을 낸다.*/
        printf("%5.2f\n", (double)sum / limit_table[age]);
        /* 이 연령에 할당했던 동적 메모리를 해제한다. */ 
        free(p[age]);
    }   
}