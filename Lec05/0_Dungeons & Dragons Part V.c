#include <stdio.h>

int main(void) {
    for (unsigned char a[9] = {0}; a[0] < 75 || (printf("%d %d %d %d %d %d", a[1], a[2], a[3], a[4], a[5], a[6]) && 0); ++a[0] && scanf("%hhd%hhd", &a[7], &a[8]) && (a[a[7]] = (a[a[7]] + ((~a[8] & 0x1) << 3) + 1) % 10));
    return 0;
}
