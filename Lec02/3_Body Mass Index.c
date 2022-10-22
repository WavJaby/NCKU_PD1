#include <stdio.h>

int main(void) {
    for (struct {int x, y; float h; } a = {0, 0, 0}; scanf("%d%d", &a.x, &a.y) && (a.h = (float)a.x / 100) && printf("%.6f", (float)a.y / (a.h * a.h)) && 0;);
    return 0;
}