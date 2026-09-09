// **********************************************
// 제   목  :  실습과제2 포인터만으로 출력하는 코드
// 날   짜  :  2026년 9월 9일
// 작성자   :  2600093
// **********************************************
#include <stdio.h>

int main(void)
{
    int a = -100;
    char b = 'A';
    double c = 3.14;

    int *pa = &a;
    char *pb = &b;
    double *pc = &c;

    printf("int형 변수 a의 값은 : %d\n", *pa);
    printf("char형 변수 b의 값은 : %c\n", *pb);
    printf("double형 변수 c의 값은 : %lf\n", *pc);

    return 0;
}
// **********************************************
// 제   목  :  실습과제4
// 날   짜  :  2026년 9월 9일
// 작성자   :  2600093
// **********************************************

#include <stdio.h>

int main(void)
{
    int a = 100, b = 200;
    int sum;

    int *pa = &a;
    int *pb = &b;
    int *psum = &sum;

    *psum = *pa + *pb;
    printf("두 정수의 합 : %d\n", *psum);

    return 0;
}
// **********************************************
// 제   목  :  실습과제5 포인터를 이용한 변수 값 변경 및 포인터 교환
// 날   짜  :  2026년 9월 9일
// 작성자   :  2600093
// **********************************************
#include <stdio.h>

int main(void)
{
    int num1 = 30, num2 = 50;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* temp;

    *ptr1 += 20;
    *ptr2 -= 10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("ptr1이 가리키는 값 : %d\n", *ptr1);

    return 0;
}
