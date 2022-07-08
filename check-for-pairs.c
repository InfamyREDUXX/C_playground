#include <stdio.h>

int main() {

    int wordSize = 4;
    char word[wordSize];
    gets(word);
    for (int i = 0; i < wordSize; i++) {
        printf("%c", word[i]);
    }
    for (int i = 0; i < wordSize; i++) {
        printf("\n%d", word[i]);
    }

    return 0;
}
