#include <stdio.h>
#include <float.h>

int main()
{
    float n1 = FLT_MIN;
    float n2 = FLT_MAX;
    double n3 = DBL_MIN;
    double n4 = DBL_MAX;
    long double n5 = LDBL_MIN;
    long double n6 = LDBL_MAX;

    printf("%0.40f %.2f\n", n1, n2);
    printf("%e %e\n", n3, n4);
    printf("%Le %Le\n", n5, n6);

    return 0;
}