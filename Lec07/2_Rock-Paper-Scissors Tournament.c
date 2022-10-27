#include <stdio.h>

int main(void) {
    for (int i = 0, j = 0, N, k, player[1024] = {0}, step = 0, jm, s = scanf("%d\n", &N) && (k = N >> 1); (s && (i < N || (getchar() && (jm = getchar()) && (i = s = 0)))) || (k > 0 || printf("%d", (player[0] >> 2) + 1) && 0); s && (((player[i] = getchar() & 0xF) && ((player[i] = ((player[i] & 0b1) << 1) | (i << 2)) || 1) || (player[i] = 1 | (i << 2))) && ++i) || ((player[j++] = ((player[i] & 0b11) == (player[i + 1] & 0b11)) ? ((jm == 'b') ? ((player[i] >> 2 > player[i + 1] >> 2) ? player[i] : player[i + 1]) : (jm == 's') ? ((player[i] >> 2 < player[i + 1] >> 2) ? player[i] : player[i + 1]) : player[i]) : (((player[i] & 0b11) - (player[i + 1] & 0b11) == 1 || (player[i] & 0b11) == 0 && (player[i + 1] & 0b11) == 2) ? player[i] : player[i + 1])) || 1) && (i += 2) && ((j == k) && (k >>= 1) && (jm = getchar()) && (i = j = 0)));
    return 0;
}