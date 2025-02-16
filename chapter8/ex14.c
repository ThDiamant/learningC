#include <stdio.h>
#define MAX_NUM_CHARS_IN_SENTENCE 100
#define SPACE ' '
#define PERIOD '.'
#define QUESTION_MARK '?'
#define EXCLAMATION_POINT '!'

int main(void)
{
    int i, sentence_length = 0;
    char input_sentence[MAX_NUM_CHARS_IN_SENTENCE] = {}, sentence_ending;

    // Read sentence with an upper char cap; separate sentence ending char
    printf("Enter a sentence (max 100 chars): ");
    for (i = 0; i < MAX_NUM_CHARS_IN_SENTENCE; i++) {
        scanf("%c", &input_sentence[i]);
        if (
            (input_sentence[i] == PERIOD) ||
            (input_sentence[i] == QUESTION_MARK) ||
            (input_sentence[i] == EXCLAMATION_POINT)
        ) {
            sentence_ending = input_sentence[i];
            break;
        }
        sentence_length++;
    }
    printf("\n");

    printf("Reversal of sentence: ");
    i = sentence_length - 1;
    int word_start_idx, word_end_idx = i;   
    for (i = sentence_length - 1; i >= 0; i--) {
        if (input_sentence[i] == SPACE) {
            word_start_idx = i + 1;
            // Print word
            for (int j = word_start_idx; j <= word_end_idx; j++) {
                printf("%c", input_sentence[j]);
            }
            printf("%c", ' ');
            word_end_idx = i - 1;
        }

        if (i == 0) {
            for (int j = 0; j <= word_end_idx; j++) {
                printf("%c", input_sentence[j]);
            }
        }

    }
    printf("%c", sentence_ending);
    printf("\n");

    return 0;
}