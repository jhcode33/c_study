#include <stdio.h>

int main()
{
    int n1 = 9;
    int size;
    int size1;
    int size2;

    //����� ������ �ڷ����� ���� ����� ���ϴ� ��
    size = sizeof n1;
    
    //�ڷ����� ũ�⸦ ���� ���ϴ� �� : sizeof(�ڷ���)
    size1 = sizeof(int);

    //ǥ�������� �ڷ����� ���ϴ� �� : sizeof(ǥ����)
    size2 = sizeof(n1);

    printf("n1�� ũ��: %d\n", size);
    printf("int �ڷ����� ũ��: %d\n", size1);
    printf("int �ڷ����� ũ��: %d\n", size2);

    return 0;
}