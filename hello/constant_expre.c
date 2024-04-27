#include <stdio.h>

int main()
{
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴

    const int con1 = 1;
    const float con2 = 0.1f;
    const char con3 = 'a';

    printf("%d %f %c", con1, con2, con3);

    return 0;
}