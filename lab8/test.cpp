#include <stdio.h>

int main() {
    int sideA, sideB;

    printf("\n\n***Rectangle***");

    printf("\n\n\nInsert side a: ");
    if (scanf("%d", &sideA) != 1)
        return 1;

    printf("\n\nInsert side b: ");
    if (scanf("%d", &sideB) != 1)
        return 1;
    
    printf("\n\nRectangle: \n\n");
    for (int i = 0; i < sideA; i++) {
        for (int j = 0; j < sideB; j++) {
            if (i == 0 || i == sideA - 1 || j == 0 || j == sideB - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


