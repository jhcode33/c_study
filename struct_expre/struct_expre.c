#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
    //����ü �ȿ� �ִ� ���� : ���
    char name[20];
    int age;
    char address[100];
};

int main()
{
    struct Person p1;     // ����ü ���� ����

    // ������ ����ü ����� �����Ͽ� �� �Ҵ�
    strcpy(p1.name, "ȫ�浿");
    p1.age = 30;
    strcpy(p1.address, "����� ��걸 �ѳ���");

    // ������ ����ü ����� �����Ͽ� �� ���
    printf("�̸�: %s\n", p1.name);       // �̸�: ȫ�浿
    printf("����: %d\n", p1.age);        // ����: 30
    printf("�ּ�: %s\n", p1.address);    // �ּ�: ����� ��걸 �ѳ���

    return 0;
}