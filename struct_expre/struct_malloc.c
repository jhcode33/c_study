#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  //ǥ�� �����
#include <string.h> //strcpy()
#include <stdlib.h> //malloc, free

struct Person {
    char name[20];
    int age;
    char address[100];
};


int main()
{
    struct Person* p1 = malloc(sizeof(struct Person)); //����ü ������ ���� �� �޸� ���� �Ҵ�

    strcpy(p1->name, "ȫ�浿");
    p1->age = 30;
    strcpy(p1->address, "�뱸������ �޼���");

    printf("�̸�: %s\n", p1->name);
    printf("����: %d\n", p1->age);
    printf("�ּ�: %s\n", p1->address);

    free(p1);

    return 0;
}