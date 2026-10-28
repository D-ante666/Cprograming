
/*
    ****************************************
    제   목  :  실습과제2
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-10-28
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char ch;

    while (1) {
        ch = getchar();

        if (ch == 'q' || ch == 'Q') {
            break;
        }

        if (ch == '\n') {
            continue;
        }

        char* p = "입력된 문자는 ";
        while (*p != '\0') {
            putchar(*p);
            p++;
        }

        putchar(ch);
        putchar('\n');
    }

    return 0;
}

/*
    ****************************************
    제   목  :  실습과제3
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-10-28
    ****************************************
*/

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char name[100];
    char address[200];
    char carNum[100];

    printf("이름: ");
    fgets(name, sizeof(name), stdin);

    printf("주소: ");
    fgets(address, sizeof(address), stdin);

    printf("자동차번호: ");
    fgets(carNum, sizeof(carNum), stdin);

    printf("<결과출력>\n");

    printf("이름: ");
    for (int i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        putchar(name[i]);
    }
    putchar('\n');

    printf("주소: ");
    for (int i = 0; address[i] != '\0' && address[i] != '\n'; i++) {
        putchar(address[i]);
    }
    putchar('\n');

    printf("자동차번호: ");
    for (int i = 0; carNum[i] != '\0' && carNum[i] != '\n'; i++) {
        putchar(carNum[i]);
    }
    putchar('\n');

    return 0;
}

/*
    ****************************************
    제   목  :  실습과제4
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-10-28
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[20];

    printf("문자열입력:");
    fgets(str, sizeof(str), stdin);

    // 배열에서 '\n'을 널 문자('\0')로 변환
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    printf("%s", str);

    return 0;
}

/*
    ****************************************
    제   목  :  실습과제5
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-10-28
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[100];
    int count = 0;
    int inWord = 0;

    printf("문자열입력: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;
        }
        else if (inWord == 0) {
            count++;
            inWord = 1;
        }
    }

    printf("단어수 : %d\n", count);

    return 0;
}

