#include <stdio.h>

int main(void) {
    for (float chr = 0, gradePoint = 0, credit = 0, total = 0, totalCredit = 0; chr != '\n' || (printf("%.2lf\n", total / totalCredit) && 0); (chr = getchar()) && ((char)chr >= '0' && (char)chr <= '9' || (char)chr == '\n') && ((total += credit * gradePoint) || 1) && ((totalCredit += credit) || 1) && ((credit = (char)chr - '0') || 1) || ((char)chr >= 'A' && (char)chr <= 'C') && ((gradePoint = 4 - ((char)chr - 'A')) || 1) || ((char)chr == 'F') && ((gradePoint = 0) || 1) || ((char)chr == '+') && ((gradePoint += 0.3) || 1) || ((char)chr == '-') && ((gradePoint -= 0.3) || 1));
    return 0;
}