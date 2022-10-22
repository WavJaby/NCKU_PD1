#include <stdio.h>

int main(void) {
    for (struct {unsigned long long backslash, slash, vertical, result; unsigned char table[256], i, sum, phase; unsigned short in; } s = {0b1000000001000000001000000001000000001000000001000000001000000001llu, 0b0000000100000010000001000000100000010000001000000100000010000000llu, 0b0000000100000001000000010000000100000001000000010000000100000001llu}; (s.phase == 0 && (s.table[s.i] = 0xFF) && (s.i++ != 255 || (++s.phase && (s.i = 0)))) || (s.phase == 1 && scanf("%hu", &s.in) && ((s.table[s.in - 1] = s.i) || 1) && (++s.i < 64 || (++s.phase && (s.i = 0)))) || (s.phase == 2 && scanf("%hu", &s.in) && ((s.table[s.in - 1] == 0xFF) || (s.result |= 0x1llu << (63 - s.table[s.in - 1]))) && (++s.i < 64 || (++s.phase && (s.i = 0) || (s.sum = ((s.result & s.slash) == s.slash) + ((s.result & s.backslash) == s.backslash))))) || (s.phase == 3 && ((s.sum += ((s.result >> ((7 - s.i) * 8)) & 0xFF) == 0xFF) || 1) && (++s.i < 8 || (++s.phase && (s.i = 0)))) || (s.phase == 4 && ((s.sum += (s.result & (s.vertical << s.i)) == (s.vertical << s.i)) || 1) && (++s.i < 8 || (++s.phase && (s.i = 0)))) || (s.phase == 5 && printf("%d\n", s.sum) && 0););
    return 0;
}
