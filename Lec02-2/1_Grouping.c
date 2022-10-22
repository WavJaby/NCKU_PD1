#include <stdio.h>

int main(void) {
    for (int i, j; scanf("%d%d", &i, &j) && printf("%d %d\n", i / j, i % j) && 0;);
    return 0;
}