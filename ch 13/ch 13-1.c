// **********************************************
// 제   목  :  실습과제2 포인터를 이용한 배열 처리
// 날   짜  :  2026년 9월 11일
// 작성자   :  2600093
// **********************************************
```c
#include <stdio.h>

int main(void)
{
    int grade[5];
    int sum = 0, i, average;
    int *ptr = grade;

    for (i = 0; i < 5; i++)
    {
        printf("성적을 입력하시오: ");
        scanf("%d", ptr + i);
    }

    for (i = 0; i < 5; i++)
        sum += *(ptr + i);

    average = sum / 5.0;
    printf("성적 평균 = %d\n", average);

    return 0;
}
```
