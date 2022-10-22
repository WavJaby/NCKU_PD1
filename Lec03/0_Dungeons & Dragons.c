#include <stdio.h>

int main(void) {
    for (int d1, d2, d3, d4, d5, d6; scanf("%d%d%d%d%d%d", &d1, &d2, &d3, &d4, &d5, &d6) && printf((d1 + d2 + d3 <= 10) ? (d4 == d5 && d5 == d6) ? "Player attacks: Critical Hit" : (d4 + d5 >= d6) ? "Player attacks: Normal Hit" : "Player attacks: Miss" : (d4 == d5 || d5 == d6 || d4 == d6) ? "Dragon attacks: Miss" : (d4 + d5 != d6) ? "Dragon attacks: Normal Hit" : "Dragon attacks: Critical Hit") && 0;);
    return 0;
}