#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int arr[26] = {0}, zeros_counter = 0;
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha == 1) {
            arr[tolower(ch) - 'a']++;
        }
    }
    printf("\n");

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha == 1) {
            arr[tolower(ch) - 'a']--;
        }
    }
    printf("\n");

    for (int i = 0; i < 26; i++) {
        if (arr[i] == 0) {
            zeros_counter++;
        }
    }

    if (zeros_counter == 26) {
        printf("The words are anagrams.");
    } else {
        printf("The words are *not* anagrams.");
    }
    
    printf("\n");
    return 0;
}