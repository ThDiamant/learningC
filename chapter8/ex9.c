/* A random walk in 2D */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10
#define M 10
#define NUM_LETTERS 26
#define DEFAULT_ENTRY '.'
#define MOVING_DIRECTIONS 4

int main(void)
{
    int i, j, row, col, dice;
    const char letters[NUM_LETTERS] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 
        'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 
        'U', 'V', 'W', 'X', 'Y', 'Z'
    };
    char grid[N][M];
    int new_positions_tried[MOVING_DIRECTIONS] = {0}; // Keeps track of 
    

    // Initialize random number generator
    srand((unsigned) time(NULL));

    // Initialize grid
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            grid[i][j] = DEFAULT_ENTRY;
        }
    }

    // Get starting position
    row = rand() % 10;
    col = rand() % 10;
    i = 0;

    // Start random walk  
    while (i < NUM_LETTERS) {      
        // Decide next step
        dice = rand() % MOVING_DIRECTIONS;
        if (dice == 0) {
            // If next position is available
            if ((row + 1 < 10) && (grid[row + 1][col] == DEFAULT_ENTRY)) {
                // Go to the next position
                grid[++row][col] = letters[i];
                i++;
                // Nullify an record of 
                for (j = 0; j < MOVING_DIRECTIONS; j++) {
                    new_positions_tried[j] = 0;
                }
            } else {
                new_positions_tried[0] = 1;
            }
        } else if (dice == 1) {
            if ((row - 1 >= 0) && (grid[row - 1][col] == DEFAULT_ENTRY)) {
                grid[--row][col] = letters[i];
                i++;
                for (j = 0; j < MOVING_DIRECTIONS; j++) {
                    new_positions_tried[j] = 0;
                }
            } else {
                new_positions_tried[1] = 1;
            }
        } else if (dice == 2) {
            if ((col + 1 < 10) && (grid[row][col + 1] == DEFAULT_ENTRY)) {
                grid[row][++col] = letters[i];
                i++;
                for (j = 0; j < MOVING_DIRECTIONS; j++) {
                    new_positions_tried[j] = 0;
                }
            } else {
                new_positions_tried[2] = 1;
            }
        } else {
            if ((col - 1 >= 0) && (grid[row][col - 1] == DEFAULT_ENTRY)) {
                grid[row][--col] = letters[i];
                i++;
                for (j = 0; j < MOVING_DIRECTIONS; j++) {
                    new_positions_tried[j] = 0;
                }
            } else {
                new_positions_tried[3] = 1;
            }
        }
        
        // If all moving directions have been tried and are invalid, stop the walk
        if (new_positions_tried[0] + new_positions_tried[1] + new_positions_tried[2] + new_positions_tried[3] == MOVING_DIRECTIONS) {
            break;
        }
    }

    // Print final grid
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}