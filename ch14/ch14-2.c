// ******************************************************************************************
// 제   목  :  실습과제2
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void Max(int* parr);

int main(void) {
    int i, arr[5];
    for (i = 0; i < 5; i++) {
        printf("정수 5개 입력: ");
        scanf("%d", &arr[i]);
    }
    Max(arr);
}

void Max(int* parr) {
    int i, max;
    max = parr[0];
    for (i = 1; i < 5; i++) {
        if (max < parr[i]) max = parr[i];
    }
    printf("최대값은: %d", max);
}

// ******************************************************************************************
// 제   목  :  실습과제3
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void GetData(int data[], int num);

int main(void)
{
    int i, data[5];

    GetData(data, 5);

    for (i = 0; i < 5; i++)
        printf("%d번째 data : %d\n", i + 1, data[i]);

    return 0;
}

void GetData(int* pdata, int num) {
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d번째 입력: ", i + 1);
        scanf("%d", &pdata[i]);
    }
}

// ******************************************************************************************
// 제   목  :  실습과제4
// 날   짜  :  2026년 9월 23일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

void Divide(double* pnum, int* inum, double* dnum);

int main(void) {
    double num = 0;
    int inum = 0;
    double dnum = 0;

    printf("실수 입력: ");
    scanf("%lf", &num);

    Divide(&num, &inum, &dnum);

    printf("정수부분: %d, 소수부분: %f\n", inum, dnum);
    return 0;
}

void Divide(double* pnum, int* inum, double* dnum) {
    *inum = (int)(*pnum);
    *dnum = (*pnum) - (int)(*pnum);
}

