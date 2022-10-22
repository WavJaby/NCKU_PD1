#include <math.h>
#include <stdio.h>

int main(void) {
    for (double x; scanf("%lf", &x) && printf("%.1f", 7 * pow(x, 4) - 8 * pow(x, 3) - pow(x, 2) + 6 * x - 22) && 0;);
    return 0;
}