// **********************************************
// 제   목  :  실습과제2 포인터만으로 출력하는 코드
// 날   짜  :  2026년 9월 14일
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
