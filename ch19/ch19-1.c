```c
// ****************************************************************
// 제   목  :  실습과제2-1
// 날   짜  :  2026년 10월 9일
// 작성자   :  2600093 서민수
// ****************************************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int calculate(int a, int b, int (*fp)(int, int));

int main(void) {
    int a = 10, b = 5;

    printf("덧셈 결과: %d\n", calculate(a, b, add));
    printf("뺄셈 결과: %d\n", calculate(a, b, sub));

    return 0;
}

int calculate(int a, int b, int (*fp)(int, int)) {
    return fp(a, b);
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}
```
```c
// ****************************************************************
// 제   목  :  실습과제2-2
// 날   짜  :  2026년 10월 9일
// 작성자   :  2600093 서민수
// ****************************************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void print_value(void* ptr, int type);

int main(void) {
    int a = 10;
    double b = 3.14;
    char c = 'A';

    print_value(&a, 1);
    print_value(&b, 2);
    print_value(&c, 3);

    return 0;
}

void print_value(void* ptr, int type) {
    if (type == 1)
        printf("정수: %d\n", *(int*)ptr);
    else if (type == 2)
        printf("실수: %.2f\n", *(double*)ptr);
    else if (type == 3)
        printf("문자: %c\n", *(char*)ptr);
}
```

```c
// ****************************************************************
// 제   목  :  실습과제3
// 날   짜  :  2026년 10월 9일
// 작성자   :  2600093 서민수
// ****************************************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int calculate(int a, int b, int (*fp)(int, int));

int main(void) {
    int op, a, b;
    int (*fp)(int, int);

    printf("연산을 선택하시오(1:덧셈,2:뺄셈,3:곱셈,4:나눗셈) : ");
    scanf("%d", &op);

    printf("두개의 정수를 입력하시오 : ");
    scanf("%d %d", &a, &b);

    if (op == 1)
        fp = add;
    else if (op == 2)
        fp = sub;
    else if (op == 3)
        fp = mul;
    else if (op == 4)
        fp = div;
    else {
        printf("잘못된 연산입니다.\n");
        return 1;
    }

    printf("결과값: %d\n", calculate(a, b, fp));

    return 0;
}

int calculate(int a, int b, int (*fp)(int, int)) {
    return fp(a, b);
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0) {
        printf("0으로 나눌 수 없습니다.\n");
        return 0;
    }
    return a / b;
}
```
