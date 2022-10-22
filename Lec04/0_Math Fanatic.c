#include <stdio.h>

int main(void) {
    for (unsigned long long si = 0, sum = 0, n, i = 0; (!i && scanf("%llu", &n) || 1) && i < n; scanf("%llu", &si) && (!(sum % si) && printf("%llu %llu\n", sum += si, si) || (sum += si) || 1) && ++i);
    return 0;
}