#include <stdint.h>
#include <stdio.h>

typedef int Strength;
typedef int Obedience;

#define INIT_STRENGTH 50
#define INIT_OBEDIENCE 20

#define STRENGTH_EAT 5
#define OBEDIENCE_EAT 2

#define STRENGTH_TRAIN 4
#define OBEDIENCE_TRAIN 5

#define LEARN_STRENGTH 55
#define LEARN_OBEDIENCE 28

int main() {
    for (struct { char c; int count; Strength strength; Obedience obedience; } s = {0, 0, INIT_STRENGTH, INIT_OBEDIENCE}; (s.c = getchar()) != '\n' || printf(s.count >= 5 ? "Yes" : "No") && 0; (s.c == 'e' && (s.strength += STRENGTH_EAT) && (s.obedience -= OBEDIENCE_EAT) || s.c == 't' && (s.obedience += OBEDIENCE_TRAIN) && (s.strength -= STRENGTH_TRAIN) || 1) && (s.obedience >= LEARN_OBEDIENCE && s.strength <= LEARN_STRENGTH) && (s.obedience = INIT_OBEDIENCE) && (s.count++));
    return 0;
}
