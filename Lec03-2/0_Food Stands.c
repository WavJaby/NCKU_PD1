#include <stdio.h>

int main(void) {
    for (int i, max = 0, min = -1; scanf("%d", &i) && (i != -1 || (printf("%d", max - min) && 0)) && ((min == -1 || i < min) && (min = i) || 1) && ((i > max) && (max = i) || 1););
    return 0;
}