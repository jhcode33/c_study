#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //표준 입출력
#include <string.h> //strcpy()
#include <stdlib.h> //malloc, free

struct Person {
    char name[20];
    int age;
    char address[100];
};


int main()
{
    struct Person* p1 = malloc(sizeof(struct Person)); //구조체 포인터 선언 및 메모리 동적 할당

    strcpy(p1->name, "홍길동");
    p1->age = 30;
    strcpy(p1->address, "대구광역시 달서구");

    printf("이름: %s\n", p1->name);
    printf("나이: %d\n", p1->age);
    printf("주소: %s\n", p1->address);

    free(p1);

    return 0;
}