#include <stdio.h>

int main(void) {
    double s1, s2, s3, s4, s5, i = scanf("%lf%lf%lf%lf%lf", &s1, &s2, &s3, &s4, &s5) && printf("%.15lf", s1 * s2 * s3 * s4 * s5);
    return 0;
}
