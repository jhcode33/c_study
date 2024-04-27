#include <stdio.h>

int main()
{
    unsigned char num1 = 1; // 0000 0001
    unsigned char num2 = 3; // 0000 0011

    unsigned char num3 = 162;
    unsigned char num4;
    num4 = ~num3;

    unsigned char num5 = 3;     // 0000 0011
    unsigned char num6 = 24;    // 0001 1000
    
    printf("%d\n", num1 & num2); // 0000 0001: 01과 11을 비트 AND하면 01이 됨
    printf("%d\n", num1 | num2); // 0000 0011: 01과 11을 비트 OR 하면 11이 됨
    printf("%d\n", num1 ^ num2); // 0000 0010: 01과 11을 비트 XOR하면 10이 됨
    printf("%u\n", num4);        // 0101 1101: num3(162)의 비트 값을 뒤집음
    printf("%u\n", num5 << 3);   // 0001 1000: num5의 비트 값을 왼쪽으로 3번 이동
    printf("%u\n", num6 << 3);   // 0000 0110: num6의 비트 값을 오른쪽으로 2번 이동

    return 0;
}