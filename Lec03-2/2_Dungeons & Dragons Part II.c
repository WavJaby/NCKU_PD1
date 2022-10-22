#include <stdio.h>

int main(void) {
    for (int d1, d2, d3, d4, d5, d6, playerHealth = 100, dragonHealth = 100; playerHealth > 0 && dragonHealth > 0; scanf("%d%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5, &d6) && (((d1 + d2 + d3) % 2) && (d4 < d5 && d5 < d6 && (dragonHealth -= 25) || (d4 % 2 == d5 % 2 || d5 % 2 == d6 % 2) && (dragonHealth -= 5) || 1) || ((d5 - d4 > d6 || d4 - d5 > d6) && (playerHealth -= 15) || (d5 + d4 != d6) && (playerHealth -= 5)) || 0) && (dragonHealth <= 0 && printf("Player wins\n")) || (playerHealth <= 0 && printf("Dragon wins\n")));
    return 0;
}
