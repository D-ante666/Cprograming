/*
    ****************************************
    제   목  :  실습과제2
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-03
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student
{
    int number;
    char name[50];
    char address[100];
};

int main(void)
{
    struct Student student;

    printf("학번을 입력하시오: ");
    scanf("%d", &student.number);
    getchar();

    printf("이름을 입력하시오: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("주소를 입력하시오: ");
    fgets(student.address, sizeof(student.address), stdin);
    student.address[strcspn(student.address, "\n")] = '\0';

    printf("\n");
    printf("1. 학번:%d\n", student.number);
    printf("2. 이름:%s\n", student.name);
    printf("3. 주소:%s\n", student.address);

    return 0;
}
/*
    ****************************************
    제   목  :  실습과제3
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-03
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Car
{
    char model[50];
    char number[20];
    int distance;
};

int main(void)
{
    struct Car car;

    printf("모델을 입력하시오: ");
    fgets(car.model, sizeof(car.model), stdin);
    car.model[strcspn(car.model, "\n")] = '\0';

    printf("번호판을 입력하시오: ");
    fgets(car.number, sizeof(car.number), stdin);
    car.number[strcspn(car.number, "\n")] = '\0';

    printf("주행거리를 입력하시오: ");
    scanf("%d", &car.distance);

    printf("\n");
    printf("1. 모델: %s\n", car.model);
    printf("2. 번호판: %s\n", car.number);
    printf("3. 주행거리: %d km\n", car.distance);

    return 0;
}
/*
    ****************************************
    제   목  :  실습과제4
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-03
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Point
{
    int x;
    int y;
};

struct Rectangle
{
    struct Point leftTop;
    struct Point rightBottom;
};

int main(void)
{
    struct Rectangle rect;
    int width, height;

    printf("좌측상단의 좌표 입력: ");
    scanf("%d %d", &rect.leftTop.x, &rect.leftTop.y);

    printf("우측하단의 좌표 입력: ");
    scanf("%d %d", &rect.rightBottom.x, &rect.rightBottom.y);

    width = rect.rightBottom.x - rect.leftTop.x;
    height = rect.rightBottom.y - rect.leftTop.y;

    printf("사각형의 폭: %d\n", width);
    printf("사각형의 높이: %d\n", height);

    return 0;
}
/*
    ****************************************
    제   목  :  실습과제5
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-03
    ****************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1 = {10, 10}, p2 = {20, 20};
    int temp;

    printf("교환전 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
    printf("교환전 P2의 좌표: (%d, %d)\n", p2.x, p2.y);

    // 두 구조체 변수 p1, p2의 멤버변수 값을 교환
    temp = p1.x;
    p1.x = p2.x;
    p2.x = temp;

    temp = p1.y;
    p1.y = p2.y;
    p2.y = temp;

    printf("교환후 P1의 좌표: (%d, %d)\n", p1.x, p1.y);
    printf("교환후 P2의 좌표: (%d, %d)\n", p2.x, p2.y);

    return 0;
}
