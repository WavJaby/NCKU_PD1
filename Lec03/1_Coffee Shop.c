#include <stdio.h>
#define AMERICANO  110
#define LATTE      150
#define CAPPUCCINO 135
#define MOCHA      145

int main(void) {
    for (int a[] = {AMERICANO, LATTE, CAPPUCCINO, MOCHA}, i, j; scanf("%d%d", &i, &j) && (i > 4 && printf("Wait, what?") || printf("The total price is %d dollars!", a[i - 1] * j));) 
    return 0;
}