#include <stdio.h>

void drawRoof(int width) {
    for (int i = 0; i <= width; ++i) {
        printf(" ");
    }
    printf("*\n");
    for (int i = 1; i < width; i++) {
        for (int j = 0; j <= width - 1 - i; ++j) {
            printf(" ");
        }
        printf("*");
        for (int j = 0; j <= i * 2; ++j) {
            printf(" ");
        }
        printf("*\n");
    }
}
void drawFloor(int width) {
    for (int i = 0; i <= (width * 2) + 2; ++i) {
        printf("*");
    }
}
void drawFence(int lengthOfFence) {
    for (int i = 0; i <= lengthOfFence - 1; ++i) {
        printf("-|");
    }
}
void drawWalls(int width, int height, int lengthOfFence) {
    drawFloor(width);
    printf("\n");
    for (int i = 0; i < height - 2; ++i) {
        printf("*");
        for (int j = 0; j <= width * 2; ++j) {
            if((i + j) % 2 == 0) {
                printf("#");
            } else {
                printf("*");
            }
        }
        printf("*");
        drawFence(lengthOfFence);
        printf("\n");
    }
    drawFloor(width);
    drawFence(lengthOfFence);
}

void drawHouse(int width, int height, int lengthOfFence) {
    drawRoof(width);
    drawWalls(width, height, lengthOfFence);
}

int main(void) {
    int width = 0;
    int height = 0;
    int lengthOfFence = 0;
    scanf("%d %d %d", &width,&height,&lengthOfFence);
    drawHouse(width, height, lengthOfFence);
    return 0;
}
