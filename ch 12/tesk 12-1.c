// **********************************************
// 제   목  :  메모리에 저장된 주소값을 출력하는 프로그램
// 날   짜  :  2026년 9월 5일
// 작성자   :  2600093
// **********************************************
#define _CRT_SECURE_NO_WARNINGS // 보안오류방지
#pragma warning(disable:6031)  // 리턴값관련 경고 방지
#include<stdio.h>

int main(void) {
	char a = 'A';
	int b = 36;
	double c = 3.141592;
	printf("char형 변수 a의 주소: %u\n", &a); // 변수 i의 주소 출력
	printf("int형 변수 b의 주소: %u\n", &b); // 변수 c의 주소 출력
	printf("double 형 변수 c의 주소: %u\n", &c); // 변수 f의 주소 출력
	return 0;
}
