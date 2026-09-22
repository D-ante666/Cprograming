// **********************************************
// 제   목  :  실습과제2
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
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
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
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

// ******************************************************************************************
// 제   목  :  실습과제4
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093
// ******************************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
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
```c
// ******************************************************************************************
// 제   목  :  실습과제5
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093
// ******************************************************************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int SquareByValue(int num);
void SquareByReference(int* num);

int main(void)
{
    int num;

    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    printf("Call-by-value 결과: %d\n", SquareByValue(num));

    SquareByReference(&num);
    printf("Call-by-reference 결과: %d\n", num);

    return 0;
}

int SquareByValue(int num)
{
    return num * 100;
}

void SquareByReference(int* num)
{
    *num = *num * 100;
}
