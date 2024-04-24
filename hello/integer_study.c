#include <stdio.h>

int main()
{
    char num1 = 10;
    short num2 = 30000;
    int num3 = -1234567890;
    long num4 = 1234567890;
    long long num5 = -1234567890123456789;

    printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

    unsigned char n1 = 200;
    unsigned short n2 = 60000;
    unsigned int n3 = 4123456789;
    unsigned long n4 = 4123456789;
    unsigned long long n5 = 12345678901234567890;

    printf("%u %u %u %lu %llu\n", n1, n2, n3, n4, n5);

    return 0;
}