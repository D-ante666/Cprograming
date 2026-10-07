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
