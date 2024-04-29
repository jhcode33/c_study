#include <stdio.h>

int main()
{
    int* numPtr; // 포인터 변수
    int num1 = 10;
    numPtr = &num1; // num1의 메모리 주소를 포인터 변수에 할당

    printf("%p\n", numPtr);

    printf("%p\n", &num1);
    return 0;
}