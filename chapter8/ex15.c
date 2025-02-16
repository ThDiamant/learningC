#include <stdio.h>
#include <ctype.h>
#define MAX_NUM_CHARS_IN_SENTENCE 80
#define PERIOD '.'
#define QUESTION_MARK '?'
#define EXCLAMATION_POINT '!'
#define SPACE ' '

int main(void)
{
    int i, sentence_length = 0, shift_amount;
    char message[MAX_NUM_CHARS_IN_SENTENCE], sentence_ending;

    printf("Enter message to be encrypted: ");
    for (i = 0; i < MAX_NUM_CHARS_IN_SENTENCE; i++) {
        scanf("%c", &message[i]);
        if (
            (message[i] == PERIOD) ||
            (message[i] == QUESTION_MARK) ||
            (message[i] == EXCLAMATION_POINT)
        ) {
            sentence_ending = message[i];
            break;
        }
        sentence_length++;
    };
    printf("\n");

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);
    printf("\n");


    printf("Encrypted message: ");
    for (i = 0; i < sentence_length; i++) {
        if (isalpha(message[i]) == 0) {
            printf("%c", message[i]);
        } else {
            if (isupper(message[i])) {
                printf("%c", ((message[i] - 'A') + shift_amount) % 26 + 'A');
            } else {
                printf("%c", ((message[i] - 'a') + shift_amount) % 26 + 'a');
            }
        }
        
    };
    printf("%c\n", sentence_ending);


    printf("\n");
    return 0;
}