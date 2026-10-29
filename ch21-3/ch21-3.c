/*
    ****************************************
    제   목  :  실습과제1
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-10-29
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000] = "";
    char input[100];

    while (1)
    {
        printf("문자열 입력 : ");
        scanf("%99s", input);

        if (strcmp(input, "quit") == 0)
            break;

        strcat(str, input);
        strcat(str, " ");

        printf("입력된 문자열: %s\n", str);
    }

    return 0;
}
/*
    ****************************************
    제  목  : 실습과제2
    학  번  : 2600093
    작성자  : 서민수
    날  짜  : 2026-10-29
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int my_strlen(char* pstr);
void RemoveBSN(char* pstr);

int main() {
	char str[100];
	printf("문자열입력:");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", my_strlen(str), str);
	return 0;
}

void RemoveBSN(char* pstr) {
	int len = my_strlen(pstr);
	pstr[len - 1] = '\0';
}

int my_strlen(char* pstr) {
	int cnt = 0;
	int i = 0;
	while (pstr[i] != '\0') {
		cnt++;
		i++;
	}return cnt;
}
/*
    ****************************************
    제  목  : 실습과제3
    학  번  : 2600093
    작성자  : 서민수
    날  짜  : 2026-10-29
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src);

int main(void)
{
    char str1[20] = "1234567890";
    char str2[20];

    my_strcpy(str2, str1);
    puts(str2);

    return 0;
}

void my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
/*
    ****************************************
    제  목  : 실습과제4
    학  번  : 2600093
    작성자  : 서민수
    날  짜  : 2026-10-29
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void my_strcat(char *dest, const char *src);

int main(void)
{
    char str1[20] = "First~";
    char str2[20] = "Second";

    my_strcat(str1, str2);
    puts(str1);

    return 0;
}

void my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}
/*
    ****************************************
    제  목  : 실습과제5
    학  번  : 2600093
    작성자  : 서민수
    날  짜  : 2026-10-29
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[5][50];
    char min_word[50];
    char max_word[50];

    for (int i = 0; i < 5; i++)
    {
        printf("문자열 입력 : ");
        scanf("%49s", words[i]);

        if (i == 0)
        {
            strcpy(min_word, words[i]);
            strcpy(max_word, words[i]);
        }
        else
        {
            if (strcmp(words[i], min_word) < 0)
            {
                strcpy(min_word, words[i]);
            }
            if (strcmp(words[i], max_word) > 0)
            {
                strcpy(max_word, words[i]);
            }
        }
    }

    printf("제일앞 : %s\n", min_word);
    printf("제일뒤 : %s\n", max_word);

    return 0;
}
