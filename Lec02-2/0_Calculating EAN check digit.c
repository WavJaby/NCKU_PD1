#include <stdio.h>

int main(void) {
    for (char in[13]; scanf("%s", in) && printf("%d\n", 9 - (in[0] + in[2] + in[4] + in[6] + in[8] + in[10] + (in[1] + in[3] + in[5] + in[7] + in[9] + in[11]) * 3 - 1152 - 1) % 10) && 0;);
    return 0;
}