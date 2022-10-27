#include <stdio.h>

// TODO: Make it one line

int need(int table[], int index) {
    if (table[index * 20] == 0) return 1;
    int count = 0, i = 0;
    while (table[index * 20 + i] != 0)
        count += need(table, table[index * 20 + i++] - 1);

    return count;
}

int main(void) {
    int N, M, count = 0;
    int table[20 * 20] = {0};
    scanf("%d", &N);
    for (size_t i = 0; i < N; ++i)
        for (size_t j = 0; (j || scanf("%d", &M)) && j < M; ++j)
            scanf("%d", table + (i * 20 + j));
    for (size_t i = 0; i < N; i++)
        count += need(table, i);

    printf("%d", count);
    return 0;
}
