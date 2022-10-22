#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    for (struct {int i, type, stackNum; char* str; } s = {0}; (s.i || scanf("%d%d", &s.type, &s.stackNum) && memset(s.str = (char*)malloc(s.stackNum), '*', s.stackNum)) && s.i < s.stackNum; printf("%*.s%.*s\n", s.type / 3 ? s.type % 2 ? s.i : s.stackNum - s.i - 1 : 0, "", s.type % 2 ? s.stackNum - s.i : s.i + 1, s.str) && ++s.i);
    return 0;
}