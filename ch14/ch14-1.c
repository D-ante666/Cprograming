// **********************************************
// 제   목  :  실습과제2
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093
// **********************************************
#include <stdio.h>
void add2(int* value);
int main(void)
{
    int number;
    printf("정수를 입력하세요:");
    scanf("%d", &number);
    add2(&number);
    printf("2만큼 증가한 값:%d\n", number);
    return 0;
}
void add2(int* value)
{
    *value += 2;
}

// ******************************************************************************************
// 제   목  :  실습과제3
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093
// ******************************************************************************************

#include <stdio.h>

int add2(int value);

int main(void)
{
    int number;

    printf("정수를 입력하세요:");
    scanf("%d", &number);

    number = add2(number);

    printf("2만큼 증가한 값:%d\n", number);

    return 0;
}

int add2(int value)
{
    value += 2;
    return value;
}

