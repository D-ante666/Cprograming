// **********************************************
// 제   목  :  실습과제2 문자열의 각 문자를 출력하는 프로그램
// 날   짜  :  2026년 9월 18일
// 작성자   :  2600093
// **********************************************
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main(void) {
	char str[100];
	int i = 0;

	printf("문자열을 입력하시오:");
	scanf("%s", str);

	while (str[i] != '\0') {
		printf("%d번째문자 %c\n", i + 1, str[i]);
		i++;
	}

	return 0;
}
// ***********************************************
// 제   목  :  실습과제3 문자열 대소문자 변환
// 날   짜  :  2026년 9월 11일
// 작성자   :  2600093
// ***********************************************
#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;

    printf("문자열을 입력하시오:");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');

        i++;
    }

    printf("변환결과 : %s", str);

    return 0;
}
