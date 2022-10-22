#include <stdio.h>

int main(int i) {
    return scanf("%x", &i) && printf("%d.%d.%d.%d", (i >> 24) & 0xFF, (i >> 16) & 0xFF, (i >> 8) & 0xFF, (i) & 0xFF) && 0;
}