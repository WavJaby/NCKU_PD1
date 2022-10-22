#include <stdio.h>

int main(void) {
    for (unsigned short i, j = 0, n = 0, t = 0, A, B, lB, B2A, gA, a[1023] = {0}; (!t && (n || scanf("%hd", &n)) && i < n && scanf("%hd", &a[i++]) || (!t && scanf("%hd", &t) && (i = 0))) || i < t; t && (j < n || (printf("%d %d %d\n", lB, B2A, gA) && (++i) && (j = 0))) && (!j && scanf("%hd%hd", &B, &A) && ((lB = 0) || (B2A = 0) || (gA = 0)) || 1) && ((a[j] < B) && (++lB) || (a[j] >= B && a[j] < A) && (++B2A) || (a[j] >= A) && (++gA) || 1) && ++j);
    return 0;
}
