#include <stdio.h>
#include <limits.h> //�ڷ����� �ִ밪�� �ּҰ��� ���ǵ� ��� ����

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