/*
    ****************************************
    제   목  :  실습과제1
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-05
    ****************************************
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student
{
    char name[10];
    int grade;

};
int main() {
    struct student list[3];
    for (int i = 0; i < 3; i++) {
        printf("이름을 입력하세요:");
        scanf("%s", list[i].name);
        printf("성적을 입력하세요:");
        scanf("%d", &list[i].grade);
    }

    int max = list[0].grade;
    char maxname[10];
    strcpy(maxname, list[0].name);

    for (int i = 1; i < 3;i++) {
        if (max < list[i].grade) {
            max = list[i].grade;
            strcpy(maxname, list[i].name);
        }
    }

    printf("%s, %d", maxname, max);
}
*/
/*
    ****************************************
    제   목  :  실습과제2
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-05
    ****************************************
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student
{
    char name[10];
    int grade;

};
int main() {
    struct student list[3];
    for (int i = 0; i < 3; i++) {
        printf("이름을 입력하세요:");
        scanf("%s", list[i].name);
        printf("성적을 입력하세요:");
        scanf("%d", &list[i].grade);
    }

    int max = list[0].grade;
    char maxname[10];
    strcpy(maxname, list[0].name);

    for (int i = 1; i < 3;i++) {
        if (maxname < list[i].name) {
            max = list[i].grade;
            strcpy(maxname, list[i].name);
        }
    }

    printf("%s, %d", maxname, max);
}
*/

/*
    ****************************************
    제   목  :  실습과제3
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-05
    ****************************************
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
    char name[10];
    int grade;
};

int main(void)
{
    struct student list[3];
    struct student* p;
    struct student* min;

    p = list;

    for (int i = 0; i < 3; i++)
    {
        printf("이름을 입력하세요: ");
        scanf("%9s", p->name);

        printf("성적을 입력하세요: ");
        scanf("%d", &p->grade);

        p++;
    }

    min = list;

    for (p = list + 1; p < list + 3; p++)
    {
        if (strcmp(p->name, min->name) < 0)
        {
            min = p;
        }
    }

    printf("이름은 %s, 점수는 %d점\n", min->name, min->grade);

    return 0;
}
*/

/*
    ****************************************
    제   목  :  실습과제4
    학   번  :  2600093
    작성자  :  서민수
    날   짜  :  2026-11-05
    ****************************************
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct triangle
{
    struct point p1;
    struct point p2;
    struct point p3;
};

int main(void)
{
    struct triangle t;
    int a, b, c;

    printf("1번째 점 (x,y) 입력: ");
    scanf("%d %d", &t.p1.x, &t.p1.y);

    printf("2번째 점 (x,y) 입력: ");
    scanf("%d %d", &t.p2.x, &t.p2.y);

    printf("3번째 점 (x,y) 입력: ");
    scanf("%d %d", &t.p3.x, &t.p3.y);

    a = (t.p1.x - t.p2.x) * (t.p1.x - t.p2.x)
        + (t.p1.y - t.p2.y) * (t.p1.y - t.p2.y);

    b = (t.p2.x - t.p3.x) * (t.p2.x - t.p3.x)
        + (t.p2.y - t.p3.y) * (t.p2.y - t.p3.y);

    c = (t.p3.x - t.p1.x) * (t.p3.x - t.p1.x)
        + (t.p3.y - t.p1.y) * (t.p3.y - t.p1.y);

    if (a + b == c || a + c == b || b + c == a)
        printf("삼각형은 직각삼각형임\n");
    else
        printf("삼각형은 직각삼각형 아님\n");

    return 0;
}
*/
