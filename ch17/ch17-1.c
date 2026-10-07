// ******************************************************************************************
// 제   목  :  실습과제
// 날   짜  :  2026년 10월 7일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int Max(int** dptrarr, int size);

int main() {
	int num1 = 50, num2 = 20, num3 = 30;
	int* ptrarr[3] = { &num1, &num2, &num3 };
	int max;

	max = Max(ptrarr, 3);

	printf("최댓값:%d\n", max);

	return 0;
}

int Max(int** dptrarr, int size) {
	int max = *(dptrarr[0]);

	for (int i = 1; i < size; i++) {
		if (max < *(dptrarr[i]))
			max = *(dptrarr[i]);
	}

	return max;
}
// ******************************************************************************************
// 제   목  :  실습과제3
// 날   짜  :  2026년 10월 7일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#include <stdio.h>

// 함수선언
void prn_str(char** ptrarr, int count);

int main(void)
{
	char* ptrarr[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptrarr) / sizeof(ptrarr[0]);
	prn_str(ptrarr, count);

	return 0;
}

// 함수정의
void prn_str(char** ptrarr, int count)
{
	for (int i = 0; i < count; i++)
		printf("%s\n", ptrarr[i]);
}
// ******************************************************************************************
// 제   목  :  실습과제4
// 날   짜  :  2026년 10월 7일
// 작성자   :  2600093 서민수
// ******************************************************************************************

#include <stdio.h>

void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr);

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5] = { 10, 30, 20, 50, 15 };

	MaxAndMin(arr, 5, &maxPtr, &minPtr);

	printf("최댓값: %d\n", *maxPtr);
	printf("최솟값: %d\n", *minPtr);

	return 0;
}

void MaxAndMin(int* arr, int size, int** maxPtr, int** minPtr)
{
	*maxPtr = &arr[0];
	*minPtr = &arr[0];

	for (int i = 1; i < size; i++)
	{
		if (**maxPtr < arr[i])
			*maxPtr = &arr[i];

		if (**minPtr > arr[i])
			*minPtr = &arr[i];
	}
}
