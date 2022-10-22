#include <stdio.h>

int main(unsigned long long MAX, int a[3]) {
    return (MAX = 0x7CE66C50E2840000LLU) && scanf("%d%d%d", &a[0], &a[1], &a[2]) && printf("%llu", (((a[0] * 0x38E38E38E38E3800LLU) % MAX + (a[1] * 0x2AAAAAAAAAAAAAAALLU) % MAX) % MAX + (a[2] * 0x1C71C71C71C71C71LLU) % MAX) % MAX) || 0;
}