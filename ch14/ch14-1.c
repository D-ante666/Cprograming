
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
