#include <stdio.h>
#include <math.h>
#define MAX_SIZE 256

unsigned int W, H;
unsigned int image[MAX_SIZE][MAX_SIZE] = {0};

char layers[4] = {'C', 'M', 'Y', 'K'};

void print_C(unsigned int mask[][MAX_SIZE]);
void print_M(unsigned int mask[][MAX_SIZE]);
void print_Y(unsigned int mask[][MAX_SIZE]);
void print_K(unsigned int mask[][MAX_SIZE]);
void CMYK_to_RGB();

int main()
{
    // Get the dimension of the image.
    scanf("%u %u", &W, &H);

    // Declare the mask for single ink color.
    unsigned int mask[MAX_SIZE][MAX_SIZE] = {0};

    // For each layer, do the following:
    for (int layer = 0; layer < 4; ++layer)
    {
        // Get color mask.
        for (int i = 0; i < H; ++i)
        {
            for (int j = 0; j < W; ++j)
            {
                scanf("%u", &mask[i][j]);
            }
        }

        // Print a layer of that color to the paper.
        switch (layers[layer])
        {
            case 'C': print_C(mask); break;
            case 'M': print_M(mask); break;
            case 'Y': print_Y(mask); break;
            case 'K': print_K(mask); break;
        }
    }

    // Convert CMYK color to RGB color.
    CMYK_to_RGB();

    // Show the final result.
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < W; ++j)
        {
            printf("#%06x ", image[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/* ^^^ Loader Code ^^^ */


void print_C(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE * MAX_SIZE; ((image[i / MAX_SIZE][i % MAX_SIZE] |= mask[i / MAX_SIZE][i % MAX_SIZE] << 24) || 1) && ++i);
}

void print_M(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE * MAX_SIZE; ((image[i / MAX_SIZE][i % MAX_SIZE] |= mask[i / MAX_SIZE][i % MAX_SIZE] << 16) || 1) && ++i);
}

void print_Y(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE * MAX_SIZE; ((image[i / MAX_SIZE][i % MAX_SIZE] |= mask[i / MAX_SIZE][i % MAX_SIZE] << 8) || 1) && ++i);
}

void print_K(unsigned int mask[][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE * MAX_SIZE; ((image[i / MAX_SIZE][i % MAX_SIZE] |= mask[i / MAX_SIZE][i % MAX_SIZE]) || 1) && ++i);
}

void CMYK_to_RGB() {
    for (int i = 0, j, C, M, Y, K; i < MAX_SIZE * MAX_SIZE; (((j = image[i / MAX_SIZE][i % MAX_SIZE]) | 1) && (C = (j >> 24) & 0xFF) || 1) && ((M = (j >> 16) & 0xFF) || 1) && ((Y = (j >> 8) & 0xFF) || 1) && ((K = j & 0xFF) || 1) && ((image[i / MAX_SIZE][i % MAX_SIZE] = (/*R*/ lround(255.f * (100 - C) * 0.01 * (100 - K) * 0.01) << 16) | /*G*/ (lround(255.f * (100 - M) * 0.01 * (100 - K) * 0.01) << 8) | /*B*/ lround(255.f * (100 - Y) * 0.01 * (100 - K) * 0.01)) || 1) && ++i);
}