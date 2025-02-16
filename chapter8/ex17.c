#include <stdio.h>

int main(void) 
{
    int size;
    printf("%d", 0 % 5);
    printf("This program creates a magic square of a specified size.\n");
    do {
        printf("The size myst be an odd number between 1 and 99.\n");
        printf("Enter size of magic square: ");
        scanf("%d", &size);
        printf("\n");
    } while (!(size > 0 && size < 100 && size % 2 != 0));
    
    int square[size][size], row, col;
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            square [row][col] = 0;  
        }
    }

    row = 0;
    col = (size - 1) / 2;
    square[row][col] = 1;
    for (int i = 2; i < size*size + 1; i++) {
        if (square[(row - 1 + size) % size][(col + 1) % size] == 0) {
            row = (row - 1 + size) % size;
            col = (col + 1) % size;
            square[row][col] = i;
        } else {
            square[++row][col] = i;
        }
    }
    
    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            // dynamically calculate width needed based on largest number in the square
            printf("%*d", snprintf(NULL, 0, "%d", size*size) + 1, square[row][col]);
        }
        printf("\n");
    }
    return 0;
}