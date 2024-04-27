#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    unsigned long long num1;

    scanf("%llu", &num1);
    printf("%llu", num1 << 20 >> 4);

    return 0;
}