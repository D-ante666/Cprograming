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
// ***********************************************
// 제   목  :  실습과제4 사전에서 앞에 나오는 문자열
// 날   짜  :  2026년 9월 11일
// 작성자   :  2600093
// ***********************************************
#include <stdio.h>

int main(void)
{
    char str1[100], str2[100];
    int i = 0;

    printf("문자열을 입력하시오:");
    scanf("%99s", str1);

    printf("문자열을 입력하시오:");
    scanf("%99s", str2);

    while (str1[i] != '\0' && str1[i] == str2[i])
        i++;

    if (str1[i] <= str2[i])
        printf("사전에서 앞에 나오는 문자열: %s\n", str1);
    else
        printf("사전에서 앞에 나오는 문자열: %s\n", str2);

    return 0;
}
