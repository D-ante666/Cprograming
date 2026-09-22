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
```c
// ******************************************************************************************
// 제   목  :  실습과제4
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093
// ******************************************************************************************

#include <stdio.h>

void swap(int* px, int* py);

int main(void)
{
    int x, y, z;

    printf("정수를 입력 하시오: ");
    scanf("%d", &x);

    printf("정수를 입력 하시오: ");
    scanf("%d", &y);

    printf("정수를 입력 하시오: ");
    scanf("%d", &z);

    printf("swap함수 호출 전 x=%d, y=%d, z=%d\n", x, y, z);

    swap(&x, &y);
    swap(&y, &z);

    printf("swap함수 호출 후 x=%d, y=%d, z=%d\n", x, y, z);

    return 0;
}

void swap(int* px, int* py)
{
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}
