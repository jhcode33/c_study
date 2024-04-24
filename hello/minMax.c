#include <stdio.h>
#include <limits.h> //자료형의 최대값과 최소값이 정의된 헤더 파일

int main()
{
    char n1 = CHAR_MIN;
    short n2 = SHRT_MIN;
    int n3 = INT_MIN;
    long n4 = LONG_MIN;
    long long n5 = LLONG_MIN;

    printf("%d %d %d %ld %lld", n1, n2, n3, n4, n5);

    return 0;

}