// ******************************************************************************************
// 제   목  :  실습과제1
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int arr1[2][2] = { {2, 4}, {5, -5} };
    int arr2[2][2] = { {-2, 3}, {0, -5} };
    int arr3[2][2];
    int i;
    int j = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d  ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// ******************************************************************************************
// 제   목  :  실습과제2
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;
    double avg[3];
    int best = 0;

    for (j = 0; j < 3; j++) {
        printf("%d번째 학생의 국어, 영어, 수학 성적 입력: ", j + 1);
        for (i = 0; i < 3; i++) {
            scanf("%d", &arr[j][i]);
        }
    }

    for (j = 0; j < 3; j++) {
        int sum = 0;

        for (i = 0; i < 3; i++) {
            sum += arr[j][i];
        }

        avg[j] = sum / 3.0;
    }

    for (j = 1; j < 3; j++) {
        if (avg[j] > avg[best]) {
            best = j;
        }
    }

    printf("최우수 학생은 %d번째 학생이고 평균점수는 %f점이다.\n",
        best + 1, avg[best]);

    return 0;
}
// ******************************************************************************************
// 제   목  :  실습과제3
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    int arr[3][3] = {
        { -5, 2, 35 },
        { -20, 5, 100 },
        { -75, 5, -25 }
    };

    int x = 0;
    int y = 0;
    int max = arr[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (max < arr[i][j]) {
                x = i;
                y = j;
                max = arr[i][j];
            }
        }
    }

    printf("최대값은: %d, 위치는 %d행 %d열", max, x + 1, y + 1);

    return 0;
}
// ******************************************************************************************
// 제   목  :  실습과제4
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void)
{
    char str[4][10];
    int i;
    int cnt = 0;

    for (i = 0; i < 4; i++) {
        printf("%d 번째 문자열 입력: ", i + 1);
        scanf("%s", str[i]);
    }

    for (i = 0; i < 4; i++) {
        int j = 0;

        while (str[i][j] != '\0') {
            cnt++;
            j++;
        }

        printf("%d번째 문자열길이: %d\n", i + 1, cnt);
        cnt = 0;
    }

    return 0;
}
// ******************************************************************************************
// 제   목  :  실습과제5
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main(void) {
    char str[4][10];
    int i = 0;
    int last = 0;

    for (i = 0; i < 4; i++) {
        printf("%d 번째 문자열 입력: ", i + 1);
        scanf("%s", str[i]);
    }

    for (i = 0; i < 4; i++) {
        if (str[last][0] < str[i][0]) {
            last = i;
        }
    }

    printf("사전에서 제일 뒤에 나오는 문자열: %s\n", str[last]);

    return 0;
}
