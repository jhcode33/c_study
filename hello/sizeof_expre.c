#include <stdio.h>

int main()
{
    int n1 = 9;
    int size;
    int size1;
    int size2;

    //선언된 변수의 자료형에 따른 사이즈를 구하는 법
    size = sizeof n1;
    
    //자료형의 크기를 직접 구하는 법 : sizeof(자료형)
    size1 = sizeof(int);

    //표현식으로 자료형을 구하는 법 : sizeof(표현식)
    size2 = sizeof(n1);

    printf("n1의 크기: %d\n", size);
    printf("int 자료형의 크기: %d\n", size1);
    printf("int 자료형의 크기: %d\n", size2);

    return 0;
}