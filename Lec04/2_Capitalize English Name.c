#include <stdio.h>

int main(void) {
    for (char chr, length = 0, i = 0, lastChr = ' '; (!length && scanf("%hhd\n", &length) || 1) && (chr = getchar()) != '.' && chr != ';' && chr != ',' || ((++i < length) && putchar('\n') && (lastChr = ' ') && (chr = getchar())); ((lastChr == ' ' && chr >= 'a' && chr <= 'z' && (chr -= 32)) || (lastChr != ' ' && chr >= 'A' && chr <= 'Z' && (chr += 32)) || 1) && (lastChr = chr) && putchar(chr));
    return 0;
}