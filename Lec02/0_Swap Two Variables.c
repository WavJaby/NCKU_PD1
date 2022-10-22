#include <stdio.h>

int main(void) {
    for (int i, j; scanf("%d %d", &i, &j) && printf("%d %d", j, i) && 0;);
    return 0;
}